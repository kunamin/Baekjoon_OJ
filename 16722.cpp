#include <bits/stdc++.h>

using namespace std;

struct Card {

    std::string S;
    std::string C;
    std::string B;

};

bool check(string a, string b, string c){
    if(a != b) {
        if(c != b) if(c != a) return true;
    }
    else {
        if(b == c) return true;
    }
    return false;
}


int main() {

    Card *cd = new Card[10];
    vector< vector<int>> vec;
    for(int i = 1; i<10; i++) {
        cin >> cd[i].S >> cd[i].C >> cd[i].B;
    }
    for(int i = 1; i<8; i++) {
        for(int j=i+1; j<9; j++){
            for(int z=j+1; z<10; z++ ) {
                if(check(cd[i].S, cd[j].S, cd[z].S)) {
                    if(check(cd[i].C, cd[j].C, cd[z].C)) {
                        if(check(cd[i].B, cd[j].B, cd[z].B)){
                            vector<int> vec1;
                            vec1.push_back(i);
                            vec1.push_back(j);
                            vec1.push_back(z);
                            vec.push_back(vec1);
                        }
                    }
                }
            }
        }
    }
    vector< vector<int>> talk;
    int n;
    cin >> n;
    int ans=0;
    int collect=0;
    bool TG=false;
    for(int i=0; i<n; i++){
        char z;
        cin >> z;
        if(z == 'H'){
            int a, b, c;
            cin >> a >> b >> c;
            bool test = false;
            vector<int> vec1;
            vec1.push_back(a);
            vec1.push_back(b);
            vec1.push_back(c);
            sort(vec1.begin(), vec1.end());
            
            if(find(talk.begin(), talk.end(), vec1) == talk.end()) {
                if(find(vec.begin(), vec.end(), vec1) != vec.end()) {
                    test = true;
                    collect++;
                }
            }
            if(test) {
                ans++;
                talk.push_back(vec1);
                sort(talk.begin(), talk.end());
            }
            else ans--;
        }
        else{
            if(collect == vec.size() && !TG ){
                TG = true;
                ans+=3;
            }
            else{
                ans--;
            }
        }
    }

    cout << ans;

    return 0;
}