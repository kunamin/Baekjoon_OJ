#include <iostream>

using namespace std;

int main()
{
    int N, r1, r2;
    int inf= 100000000;
    cin >> N >>r1 >>r2;
    int d[N+5][N+5];
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            d[i][j] = inf;
        }
    }
    int s, e, t;
    for (int i=0; i<M; i++){
        cin >> s>> e >> t;
        d[s][e]= t;
        d[e][s]= t;
    }
    for(int k=1;k<=N;k++)
        for(int i=1;i<=N;i++)
            for(int j=1;j<=N;j++)
            if(i!=j && d[i][j]>d[i][k]+d[k][j]) d[i][j]=d[i][k]+d[k][j];

}
