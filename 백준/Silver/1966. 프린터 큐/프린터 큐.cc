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
	int T;
	cin >> T;
	for(int z=0; z<T; z++){
		queue<pair<int,int>> q;
		priority_queue<int> pq;
		int N, M;
		cin >> N >> M;
		int tmp;
		for(int i=0; i<N; i++){
			cin >> tmp;
			pq.push(tmp);
			q.push(make_pair(tmp,i));
		}
		int i=1;
		while(true){
			if(q.front().first == pq.top()) {
				if(q.front().second == M) {
					break;
				}
				i++;
				q.pop();
				pq.pop();
			}
			else {
				q.push(q.front());
				q.pop();
			}
			
		}
		cout << i << '\n';
		
	}
	return 0;
}