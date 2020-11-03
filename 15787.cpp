#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;
    vector< bitset<20> > vec[N];

    for(int i=0; i<M; i++){
        int a;
        cin >> a;
        if(a==1){
            int b, c;
            cin >>b >> c;
            vec[b-1][c-1] = 1;
        }
        else if(a==2){
            int b, c;
            cin >>b >> c;
            vec[b-1][c-1] = 0;
        }
        else if(a==3){
            int b;
            cin >> b;
            vec[b-1] = ((int)vec[b-1])*2;
        }
        else{
            int b;
            cin >>b;
            vec[b-1] = vec[b-1];
        }
    }

    return 0;
}
