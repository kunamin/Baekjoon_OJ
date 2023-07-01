#include <bits/stdc++.h>

using namespace std;

long long binary_search(long long n){
    long long left = 0;
    long long right = sqrtl(n);
    while(left <= right){
        unsigned long long mid = (left + right) / 2;
        if(mid < sqrtl(n)) left = mid + 1;
        else right = mid - 1;
    }
    cout << fixed;
    cout.precision(30);
    if(left < sqrtl(n)) return left + 1;
    else return left;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long N;
    cin >> N;
    cout << binary_search(N);
    return 0;
}