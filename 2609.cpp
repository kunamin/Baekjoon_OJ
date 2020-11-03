#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int a, b;

	cin >> a >> b;
	int n;
	int tmp = a*b;
	while (b != 0){
        n = a%b;
        a = b;
        b = n;
	}
	cout << a << "\n" << tmp / a << "\n";


}
