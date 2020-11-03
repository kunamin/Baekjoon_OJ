#include <bits/stdc++.h>

using namespace std;


int main() {

    int N, M, V;

    cin >> N >> M >> V;

    short int vec[N+1][N+1] = {0, };
    int tmp1, tmp2;
    for(int i=0; i<M; i++){
        cin >> tmp1 >>tmp2;
        vec[tmp1][tmp2] = 1;
        vec[tmp2][tmp1] = 1;
    }
    stack<int> s;
    vector<int> sv;
    queue<int> q;
    vector<int> qv;
    s.push(V);
    q.push(V);

    bool sb[N+1] = {false, };
    sb[V] = true;

    bool qb[N+1] = {false, };
    qb[V] = true;
    sv.push_back(V);
    while(!s.empty()){
        int tmp = s.top();
        if(sb[tmp] == false)
            sv.push_back(tmp);
        sb[tmp] = true;
        s.pop();


        for(int i = N; i >= 1; i--) {
            if(vec[tmp][i] == 1 && sb[i] == false){
                s.push(i);
            }
        }
    }
    while(!q.empty()){
        int tmp = q.front();
        qv.push_back(tmp);
        q.pop();
        for(int i = 1; i <= N; i++) {
            if(vec[tmp][i]==1 && qb[i]==false){
                q.push(i);
                qb[i] = true;
            }
        }
    }


    for(int i =0; i<sv.size(); i++ ){
        cout << sv[i] << " ";
    }

    cout << "\n";
     for(int i =0; i<qv.size(); i++ ){
        cout << qv[i] << " ";
    }

    return 0;
}
