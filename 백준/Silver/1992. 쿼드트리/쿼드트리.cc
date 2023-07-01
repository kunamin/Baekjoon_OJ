#include <bits/stdc++.h>
using namespace std;

vector<string> v;
string ans="";

void F(int x, int y, int a){
	bool ch = true;
	for(int i=x; i<x+a; i++){
		for(int j=y; j<y+a; j++){
			if(v[i][j] != v[x][y]) {
				ans+='(';
				ch = false; 
				F(x,y,a/2);
				F(x,y+a/2,a/2);
				F(x+a/2,y,a/2);
				F(x+a/2,y+a/2,a/2);
				break;
			}
		}
		if(!ch) break;
	}
	if(ch) {
		ans+=v[x][y];
	}
	else ans+=')';
	
	
}

int main() {
	cin.tie(0);
    cin.sync_with_stdio(0);
	
	int N;
	cin >> N;
	v.resize(N,"");
	
	for(int i=0; i<N; i++){
		cin >> v[i];
	}
	
	F(0,0,N);
	
	cout << ans;
	
	
	return 0;
}
