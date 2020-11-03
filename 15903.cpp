#include <iostream>
#include <algorithm>
using namespace std;

 

int main()

{
	int a;
	int b;
	cin >> a>> b;
	long  arr[a];
	
	for (int i=0; i<a; i++) {
		cin >> arr[i];
	}
	long temp = 0;
	for (int i=0; i<b; i++) {
		sort(arr, arr+a);
		temp = arr[0] + arr[1];
		arr[0] = temp;
		arr[1] = temp;
	} 
	temp = 0;
	for (int i=0; i<a; i++) {
		temp += arr[i];
	}
	cout << temp; 
}
