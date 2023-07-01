#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <deque>
#include <sstream>
using namespace std;

int main() {
	cin.tie(0);
    cin.sync_with_stdio(0);
	int T;
	cin >> T;
	for(int z=0; z<T; z++){
		string s;
		cin >> s;
		int n;
		cin >> n;
		string tmp;
		cin >> tmp;
		
		deque<int> dq;
		int t=0;
		for(int i=1; i<tmp.length(); i++){
			if(tmp[i] != ',' && tmp[i] != ']') {
				t*=10;
				t+=tmp[i]-'0';
			}
			else if(t != 0) {
				dq.push_back(t);
				t=0;
			}
		}
	
		bool ch = true;
		bool error = false;
		for(int i=0; i<s.length(); i++){
			if(s[i] == 'R'){
				ch = !ch;
			}
			else if(dq.empty()){
				error = true;
				break;
			}
			else if(ch){
				dq.pop_front();
			}
			else dq.pop_back();
		}
		
		if(error){
			cout << "error" << '\n';
		}
		else if(ch){
			cout << '[';
			for(int i=0; i<dq.size(); i++){
				cout << dq[i];
				if(i != dq.size()-1) cout << ',';
			}
			cout << ']' << '\n';
		}
		else {
			cout << '[';
			for(int i=dq.size()-1; i>-1; i--){
				cout << dq[i];
				if(i != 0) cout << ',';
			}
			cout << ']' << '\n';
		}
		
	}
	return 0;
}
