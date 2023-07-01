#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
    cin.sync_with_stdio(0);
	
	int A, B, C;
	cin >> A >> B >> C;
	if( A == B && B == C) cout << 10000+ A*1000;
	else if( A == B ) cout << 1000 + A*100;
	else if( B == C ) cout << 1000 + B*100;
	else if( A == C ) cout << 1000 + A*100;
	else cout << max(A,max(B,C))*100;
	return 0;
}
