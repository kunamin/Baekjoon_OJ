#include <iostream>
using namespace std;
long long int A, B, C;

long long int F(long long int b){
	if(b==1) return A%C;
	
	long long int tmp = F(b/2);
	if(b%2==0) return tmp*tmp%C;
	else return tmp*tmp%C*A%C;
	
}


int main() {
	cin.tie(0);
    cin.sync_with_stdio(0);
	cin >> A >> B >> C;
	cout << F(B);
	
	return 0;
}