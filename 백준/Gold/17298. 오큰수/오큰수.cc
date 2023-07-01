#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <stack>
using namespace std;

int main() {
	int N;
	cin >> N;
	stack<int> st;
	vector<int> v(N);
	for(int i=0; i<N; i++){
		cin >> v[i];
	}
	vector<int> ans(N);
	for(int i=N-1; i>=0; i--){
		if(st.size() != 0){
			int j=st.size();
			for(int k=0; k<j; k++){
				if(st.top()>v[i]){
					ans[i] = st.top();
					st.push(v[i]);
					break;
				}
				else {
					st.pop();
				}
			}
		}
		if(st.size() == 0){
			ans[i]=-1;
			st.push(v[i]);
		}
	}
	for(int i=0; i<N; i++){
		cout << ans[i] << ' ';
	}
	return 0;
}