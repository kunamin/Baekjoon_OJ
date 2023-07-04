#include <bits/stdc++.h>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    int N;
    cin >> s >> N;
    int l = s.size();
    int ans = 0;
    for(int i=0; i<l; i++){
        char c = s[l-1-i];
        if(c >= '0' && c <= '9'){
            int c_int = c - '0';
            ans += c_int * pow(N, i);
        }
        else {
            int c_int = c - 'A' + 10;
            ans += c_int * pow(N, i);
        }
    }
    cout << ans;

    return 0;
}