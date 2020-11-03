#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    cin >>N;

    vector<int> vec;
    for(int i=0; i<N; i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }

    vector<int> dp;
    dp.push_back(vec[0]);
    int ans=dp[0];
    for(int i=1; i<N; i++){
        dp.push_back(max(dp[i-1]+vec[i], vec[i]));
        ans=max(ans, dp[i]);
    }

    cout<<ans;

    return 0;
}
