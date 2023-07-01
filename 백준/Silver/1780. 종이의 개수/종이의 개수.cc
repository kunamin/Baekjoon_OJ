#include <bits/stdc++.h>
using namespace std;

int minuss=0;
int zeroo=0;
int pluss=0;
vector<vector<int>> v;

void F(int x, int y, int a){
	bool ch = true;
	for(int i=x; i<x+a; i++){
		for(int j=y; j<y+a; j++){
			if(v[i][j] != v[x][y]) {
				ch = false; 
				break;
			}
		}
		if(!ch) break;
	}
	if(ch) {
		if(v[x][y] == 1) pluss++;
		else if(v[x][y] == 0) zeroo++;
		else minuss++;
	}
	else {
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				F(x+a/3*i,y+a/3*j,a/3);
			}
		}
	}
	
	
}

int main() {
	cin.tie(0);
    cin.sync_with_stdio(0);
	
	int N;
	cin >> N;
	v.resize(N,vector<int>(N));
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cin >> v[i][j];
		}
	}
	
	F(0,0,N);
	
	cout << minuss << '\n' << zeroo << '\n' << pluss;
	
	
	return 0;
}

