#include <bits/stdc++.h>

using namespace std;

int N, M, S;
vector<vector<pair<char,bool>>> v;
string str;
int position =0;
int x = 0, y = 0;
bool flag1 = true;
bool flag2 = true;
string answer;
//void move(){
//    if(x+1 != N){
//        if(v[x+1][y].second && v[x+1][y].first == str[position]){
//            x++;
//            answer += "D";
//
//            return;
//        }
//    }
//    if(y-1 != -1){
//        if(v[x][y-1].second && v[x][y-1].first == str[position]){
//            y--;
//            answer += "L";
//            return;
//        }
//    }
//    if(x-1 != -1){
//        if(v[x-1][y].second && v[x-1][y].first == str[position]){
//            x--;
//            answer += "U";
//            return;
//        }
//    }
//    if(y+1 != M){
//        if(v[x][y+1].second && v[x][y+1].first == str[position]){
//            y++;
//            answer += "R";
//            return;
//        }
//    }
//
//    if(flag1 && x != N-1){
//        x++;
//        answer += "D";
//    }
//    else if(!flag1 && x != 0) {
//        x--;
//        answer += "U";
//    }
//    else {
//        if(flag2){
//            if(x == N-1) {
//                if(y == M-1) {
//                    flag2 = false;
//                    flag1 = false;
//                    y--;
//                    answer += "L";
//                }
//                else {
//                    y++;
//                    flag1 = false;
//                    answer += "R";
//                }
//            }
//            else if(x == 0) {
//                if(y == M-1) {
//                    flag2 = false;
//                    flag1 = true;
//                    y--;
//                    answer += "L";
//                }
//                else {
//                    y++;
//                    flag1 = true;
//                    answer += "R";
//                }
//            }
//        }
//        else {
//            if(x == N-1) {
//                if(y == 0) {
//                    flag2 = true;
//                    flag1 = false;
//                    y++;
//                    answer += "R";
//                }
//                else {
//                    y--;
//                    flag1 = false;
//                    answer += "L";
//                }
//            }
//            else if(x == 0) {
//                if(y == 0) {
//                    flag2 = true;
//                    flag1 = true;
//                    y++;
//                    answer += "R";
//                }
//                else {
//                    y--;
//                    flag1 = true;
//                    answer += "L";
//                }
//            }
//        }
//    }
//}


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> M >> S;
    map<char, vector<pair<int,int>>> m_check;
    for(int i=0; i<N; i++){
        vector<pair<char,bool>> temp(M);
        string tmp;
        cin >> tmp;
        for(int j=0; j<M; j++){
            temp[j].first = tmp[j];
            temp[j].second = true;
            auto it = m_check.find(tmp[j]);
            if(it == m_check.end()) {
                vector<pair<int, int>> vt = {{i, j}};
                m_check.insert({tmp[j], vt});
            }
            else
                it->second.emplace_back(i, j);
        }
        v.push_back(temp);
    }
    cin >> str;
    map<char, int> m;
    for(int i=0; i<S; i++){
        auto it = m.find(str[i]);
        if(it == m.end()) {
            m.insert({str[i], 1});
        }
        else
            it->second++;
    }
    double ans = INT32_MAX;
    for(auto & it : m){
        auto it2 = m_check.find(it.first);
        if(it2 == m_check.end()){
            ans = 0.0;
            break;
        }
        else{
            double temp = (double)it2->second.size() / it.second;
            if(ans > temp)
                ans = temp;
        }
    }
    int min = floor(ans);
    cout << min << ' ';
    answer = "";
    while(min != 0){
//        if(v[x][y].second){
//            if(v[x][y].first == str[position]){
//                v[x][y].second = false;
//                position++;
//                answer += "P";
//                if(position == S){
//                    min--;
//                    position = 0;
//                    if(min == 0)
//                        break;
//                }
//            }
//        }
        auto it = m_check.find(str[position]);
        int nxt_x = it->second.back().first;
        int nxt_y = it->second.back().second;
        it->second.pop_back();
        if(nxt_x > x){
            for(int i=0; i<nxt_x-x; i++)
                answer += "D";
        }
        if(nxt_x < x){
            for(int i=0; i<x-nxt_x; i++)
                answer += "U";
        }
        if(nxt_y > y){
            for(int i=0; i<nxt_y-y; i++)
                answer += "R";
        }
        if(nxt_y < y){
            for(int i=0; i<y-nxt_y; i++)
                answer += "L";
        }
        x = nxt_x;
        y = nxt_y;
        answer += "P";
        position++;
        if(position == S){
            min--;
            position = 0;
            if(min == 0)
                break;
        }
    }
    while (x != N-1){
        x++;
        answer += "D";
    }
    while (y != M-1) {
        y++;
        answer += "R";
    }
    cout << answer.size() << '\n';
    cout << answer;

    return 0;
}