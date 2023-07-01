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
	queue<int> q;
	for(int i=1; i<=N; i++){
		q.push(i);
	}
	int i=0;
	while(q.size() != 1){
		if(i%2 == 0) {
			q.pop();
		}
		else {
			q.push(q.front());
			q.pop();
		}
		i++;
	}
	cout << q.front();
}
