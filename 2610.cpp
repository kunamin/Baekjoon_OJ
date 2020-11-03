#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    int inf= 100000000;
    cin >> N >>M;
    int d[N+5][N+5];
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            d[i][j] = inf;
        }
    }
    int s, e;
    for (int i=0; i<M; i++){
        cin >> s>> e;
        d[s][e]= 1;
        d[e][s]= 1;
    }
    for(int k=1;k<=N;k++)
        for(int i=1;i<=N;i++)
            for(int j=1;j<=N;j++)
            if(i!=j && d[i][j]>d[i][k]+d[k][j]) d[i][j]=d[i][k]+d[k][j];

    int vSize=0;
    int aSize=0;
    int iSize;
    int imsi[N+5];
    int ans[N+5];
    int v[N+5];

    while(vSize<N){
        for(int i=1;i<=N;i++) imsi[i]=0;
        iSize=0;
        for(int i=1;i<=N;i++){
            if(iSize !=0 && d[e][i]!=inf){
                v[i]=1;
                iSize++;
                vSize++;
                imsi[iSize]=i;
            }
            if(iSize==0 && v[i]==0) {
                v[i]=1;
                iSize++;
                vSize++;
                imsi[iSize]=i;
                e=i;
            }
        }

        s=1;
        int pe=inf;
        for(int i=1;i<=iSize;i++)
        {
            e=0;
            for(int j=1;j<=iSize;j++)
            {
                if(e<=d[imsi[i]][imsi[j]] && i!=j){
                    e=d[imsi[i]][imsi[j]];
                }
            }
            if(pe>=e){
                s=i;
                pe=e;
            }
        }
        aSize++;
        ans[aSize]=imsi[s];
    }
    sort(ans+1,ans+1+aSize);
    cout << aSize << endl;
    for(int i=1;i<=aSize;i++)
        cout << ans[i] << endl;

    return 0;
}
