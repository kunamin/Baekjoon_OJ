#include <bits/stdc++.h>

using namespace std;
int a[1000006];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;

    cin >> N;

    int ans=0;
    for(int i=0; i<N; i++){
        int h;
        cin >> h;

        if(a[h+1] == 0){
            a[h]++;
            ans ++;
        }
        else{
            a[h+1]--;
            a[h]++;
       }

    }

    cout << ans;
    return 0;
}
