#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <deque>
using namespace std;

int main() {
	cin.tie(0);
    cin.sync_with_stdio(0);
	int N, M;
	cin >> N >> M;
	deque<int> dq;
	for(int i=1; i<=N; i++){
		dq.push_back(i);
	}
	
	int ans=0;
	for(int i=0; i<M; i++){
		int tmp;
		cin >>tmp;
		deque<int> tempr=dq;
		deque<int> templ=dq;
		
		int r=0;
		int l=0;
		while(tempr.front() != tmp){
			r++;
			tempr.push_back(tempr.front());
			tempr.pop_front();
		}
		while(templ.front() != tmp){
			l++;
			templ.push_front(templ.back());
			templ.pop_back();
		}
		if(l<r) {
			ans+=l;
			dq=templ;
		}
		else {
			ans+=r;
			dq=tempr;
		}
		dq.pop_front();
	}
	
	cout << ans;
	return 0;
}
