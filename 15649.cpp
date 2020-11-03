#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    vector< vector<int> > vec(N+1);
    int a[N+1] ={0, };
    for(int j=1; j<N+1; j++){
        vector<int> tmp;
    for(int i=1; i<N+1; i++){
        if(i != j) tmp.push_back(i);
    }
    vec[j]= tmp;
    }

    for(int i=1; i<N+1; i++){
        cout << i << " ";
        a[i]=1;
        int t=-1
        for(int j=1; j<M; j++){
            if(a[vec[i][t+1]]==0){
                cout << vec[i] << " ";
                a[vec[i][t+1]]=1;
                if(j==M && vec[i][t+1] != )
            }

        }

    }



}
