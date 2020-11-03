#include <bits/stdc++.h>

using namespace std;

vector<int> getPi(vector<int> p){
    int m=p.size();
    int j=0;
    vector<int> pi(m, 0);
    for(int i=1; i<m; i++){
        while(j >0 && p[i] != p[j])
            j = pi[j-1];
        if(p[i] == p[j]){
            j++;
            pi[i] = j;
        }
    }

    return pi;
}


int main()
{
    int N;
    int K;
    int temp;
    vector< vector<int> > vec;
    vector< vector<int> > vecr;
    vector<int> pi;
    int a=0;

    cin >> N >> K;

    int M[N]={};
    for (int i=0; i<N; i++){
        cin >> M[i];
        vector<int> vec2;
        vec.push_back(vec2);

        for (int j=0; j<M[i]; j++){
            cin >> temp;
            vec[i].push_back(temp);
        }
    }

    pi = getPi(vec[0]);
    int n= vec[0].size();
    for (int i=1; i<N; i++){
        int m=vec[i].size();
        int z=0;
        for(int j=0; j<M[i]; j++){
            while(z>0 && vec[i][j] != vec[0][z])
                z = pi[z-1];
            if(vec[i][j] == vec[0][z]) {
                if(z==m-1)
            }


        }
    }





    return 0;
}
