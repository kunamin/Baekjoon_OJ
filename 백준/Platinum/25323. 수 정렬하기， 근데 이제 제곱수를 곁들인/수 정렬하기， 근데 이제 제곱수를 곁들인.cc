#include <bits/stdc++.h>

using namespace std;

unsigned long long gcd(unsigned long long n, unsigned long long m){
    if(n < m) swap(n, m);
    if(m == 0) return n;
    return gcd(m, n%m);
}
//
//bool binary_search(long long n){
//    long long left = 0;
//    long long right = sqrtl(n);
//    while(left <= right){
//        unsigned long long mid = (left + right) / 2;
//        if(mid < sqrtl(n)) left = mid + 1;
//        else right = mid - 1;
//    }
//    if(left != sqrtl(n)) return false;
//    else return true;
//}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >> N;
    vector<long long> v(N);
    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }
    vector<long long> v_sorted = v;
    sort(v_sorted.begin(), v_sorted.end());
//    for(int i=0; i<N; i++){
//        cout << v_sorted[i] << " ";
//    }
//    cout << "\n";
    for(int i=0; i<N; i++){
        long long g = gcd(v_sorted[i], v[i]);
        long long a = (v[i] / g);
        long long b = (v_sorted[i] / g);
        if (sqrtl(a) != (long long) sqrtl(a) || sqrtl(b) != (long long) sqrtl(b) ){
            cout << "NO" << '\n';
            return 0;
        }
    }
    cout << "YES";


    return 0;
}