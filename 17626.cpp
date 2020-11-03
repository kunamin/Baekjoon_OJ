#include <bits/stdc++.h>
using namespace std;

int Factorial(int n);

int main(){
	int n;
	cin >> n;
	vector<int> v;
	
	int ans;
	for (int a = sqrt(n); a >0; --a) {	
    	int i = n;
		i -= a*a;
		if(i != 0) {
			for(int b = sqrt(i); b>0; --b){
				int j = i;
				j -= b*b;
				if(j != 0){
					for(int c = sqrt(j); c>0; --c){
						int k = j;
						k -= c*c;
						if(k == 0){
							ans = 3;
							v.push_back(ans);
							continue;
						}
						else {
							ans = 4;
							v.push_back(ans);
							continue;
						}
					}
				}
				else {
					ans = 2;
					v.push_back(ans);
					break;
				}
			}
		}
		else {
			ans = 1;
			v.push_back(ans);
			break;
		}
	}
    sort(v.begin(), v.end());
    
        	
    cout << v[0];
    
    return 0;
}