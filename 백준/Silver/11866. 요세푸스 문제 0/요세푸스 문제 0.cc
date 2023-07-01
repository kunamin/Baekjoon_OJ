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
	int N, K;
	cin >> N >> K;
	queue<int> q;
	for(int i=1; i<=N; i++){
		q.push(i);
	}
	int i=1;
	cout << '<';
	while(q.size() != 1){
		if(i%K == 0) {
			cout << q.front() <<", ";
			q.pop();
		}
		else {
			q.push(q.front());
			q.pop();
		}
		i++;
	}
	cout << q.front() << '>';
}
