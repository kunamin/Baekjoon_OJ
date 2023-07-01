#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <queue>
using namespace std;

int main() {
	cin.tie(0);
    cin.sync_with_stdio(0);
	int N;
	cin >> N;
	vector<int> v;
	for(int i=0; i<N; i++){
		string s;
		cin >> s;
		if(s == "push_back"){
			int a;
			cin >> a;
			v.push_back(a);
		}
		else if(s == "push_front") {
			int a;
			cin >> a;
			v.insert(v.begin(),a);
		}
		else if(s == "front") {
			if(v.empty()) cout << -1 << '\n';
			else cout << *v.begin() << '\n';
			
		}
		else if(s == "back"){
			if(v.empty()) cout << -1 << '\n';
			else cout << *(v.end()-1) << '\n';
		}
		else if(s == "size") {
			cout << v.size() << '\n';
		}
		else if(s == "empty"){
			if(v.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if(s == "pop_front"){
			if(v.empty()) cout << -1 << '\n';
			else {
				cout << *v.begin() << '\n';
				v.erase(v.begin());
			}
		}
		else {
			if(v.empty()) cout << -1 << '\n';
			else {
				cout << *(v.end()-1) << '\n';
				v.pop_back();
			}
		}
	}
	
	return 0;
}