#include <iostream>
using namespace std;

int Factorial(int n);

int main(){
	unsigned long long int a;
	cin >> a;
	
    unsigned long long int x,y;
    x=1;
    y=1;
    if(a%2==0)
		for (int i = 0; i <a/2; ++i) {
        	x *= 2;
        	x %= 16769023;
		}
    else
    	for (int i = 0; i <a/2+1; ++i){
        	x *= 2;
        	x %= 16769023;
		}
        	
    cout << x;
    
    return 0;
}
