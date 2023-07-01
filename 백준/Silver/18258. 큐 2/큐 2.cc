#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <queue>
using namespace std;
int q[2000001];
int fr = 0;
int ba = 0;

void push(int a){
	q[ba] = a;
	ba++;
}
int empty(){
	if(ba-fr) return 0;
	else return 1;
}

int pop(){
	if(!(ba-fr)) {
		return -1;
	}
	else {
		fr++;
		return q[fr-1];
	}
}


int main() {
	cin.tie(0);
    cin.sync_with_stdio(0);
	int N;
	cin >> N;
	for(int z=0; z<N; z++){
		string s;
		cin >> s;
		if(s == "push") {
			int tmp;
			cin >> tmp;
			push(tmp);
		}
		else if(s == "pop") {
			cout << pop() << '\n';
		}
		else if(s == "size"){
			cout << ba-fr << '\n';
		}
		else if(s == "empty"){
			cout << empty() << '\n';
		}
		else if(s == "front"){
			if(!(ba-fr)) cout << -1 << '\n';
			else cout << q[fr] << '\n';
		}
		else {
			if(!(ba-fr)) cout << -1 << '\n';
			else cout << q[ba-1] << '\n';
		}
	}
}
