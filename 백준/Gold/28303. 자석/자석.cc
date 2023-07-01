#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N, K;
    cin >> N >> K;
    vector<int> v(N);
    vector<int> v_minus(N);
    vector<int> v_plus(N);
    int min_minus= INT32_MAX;
    int min_plus= INT32_MAX;
    int ans = INT32_MIN;
    cin >> v[0];
    min_minus = v[0];
    v_minus[0] = min_minus;
    for(int i = 1; i < N; i++) {
        cin >> v[i];
        if(v[i] - K*i<min_minus) {
            min_minus = v[i] - K * i;
        }
        v_minus[i] = min_minus;
        int tmp= v[i] - K*i - v_minus[i-1];
        if(ans < tmp) ans = tmp;
    }
    min_plus = v[N-1]+K*(N-1);
    v_plus[N-1] = min_plus;
    for(int i = N-2; i >= 0; i--) {
        if (v[i] + K*i < min_plus) {
            min_plus = v[i] + K*i;
        }
        v_plus[i] = min_plus;
        int tmp = v[i] + K*i - v_plus[i+1];
        if(ans < tmp) ans = tmp;
    }
    cout << ans;
    return 0;
}