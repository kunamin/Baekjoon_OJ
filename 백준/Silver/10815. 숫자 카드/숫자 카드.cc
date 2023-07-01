#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(0);
    cin.sync_with_stdio(0);
	int N, M;
	cin >> N;
	vector<int> number(N);
	for(int i =0; i<N; i++){
		cin >> number[i];
	}
	sort(number.begin(), number.end());
	cin >> M;
	vector<int> integer(M);
	for(int i=0; i<M; i++){
		cin >> integer[i];
	}
	vector<int> ans(M, 0);
	for(int i=0; i<M; i++){
		int st = 0;
		int ed = N-1;
		while(st <= ed) { 
			if(number[(st+ed)/2] == integer[i]) {
				ans[i] = 1;
				break;
			}
			else if (number[(st+ed)/2] < integer[i]){
				st = (st+ed)/2 + 1;
			}
			else {
				ed = (st+ed)/2 - 1;
			}
		}
		
		
	}
	for(int i=0; i<M; i++){
		cout << ans[i] << ' ';
	}
	return 0;
}