#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(0);
    cin.sync_with_stdio(0);
	
	int A, B, C;
	cin >> A >> B >> C;
	A = (A + C/60 + (B+C%60)/60)%24;
	B = (B+C%60)%60;
	cout << A << ' ' << B;
	return 0;
}
