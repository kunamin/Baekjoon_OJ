#include <iostream>
#include <cstdio>
#include <set>
#include <vector>
#include <cstring>
using namespace std;
const int MAX = 500000 + 1;
vector<int> adj[MAX];
vector<int> ::iterator it;
bool visited[MAX];
long long ans;
int distan[MAX];
void dfs(int start, long long dist)
{
	if (start != 1 && !visited[start] && adj[start].size() == 1) {
		printf("%d : %d\n", start, dist);
		ans += dist;
		return;
	}
	visited[start] = true;
	for (it = adj[start].begin(); it<adj[start].end(); it++) {
		if (visited[*it]) continue;
		dfs(*it, dist+1);
	}
}

int main(void)
{
	int N;
	cin >> N;
	for (int i = 0; i < N - 1; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1, 0);
	if (ans % 2 == 0) cout <<"No";
	else cout << "Yes";
	for (int i = 1; i <= N; i++) {
		printf("%d : %d\n", i, distan[i]);
	}
	return 0;
}
