#include <bits/stdc++.h>
using namespace std;

int white=0;
int blue=0;
vector<vector<int>> v;

void F(int x, int y, int a){
	bool ch = true;
	for(int i=x; i<x+a; i++){
		for(int j=y; j<y+a; j++){
			if(v[i][j] != v[x][y]) {
				ch = false; 
				F(x,y,a/2);
				F(x+a/2,y,a/2);
				F(x,y+a/2,a/2);
				F(x+a/2,y+a/2,a/2);
				break;
			}
		}
		if(!ch) break;
	}
	if(ch) {
		if(v[x][y]) blue++;
		else white++;
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
	
	cout << white << '\n' << blue;
	
	
	return 0;
}
