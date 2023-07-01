#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long N;
    cin >> N;
    int one_cnt = 0;
    bool flag = true;
    while(flag) {
        one_cnt++;
        long long sum = one_cnt;
        int cnt = one_cnt;
        while(cnt != one_cnt*2+1) {
            sum += sum+1;
            if(sum >= N) {
                flag = false;
                break;
            }
            else{
                cnt++;
            }
        }
    }
    cout << one_cnt;
    return 0;
}