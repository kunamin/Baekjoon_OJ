#include <bits/stdc++.h>

using namespace std;
#define inf 10000000
int V, E, K;

vector<vector<pair<int,int> > > vec;
vector<int> dist;

void dijkstra();



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> V >> E;
	cin >> K;
	
	vec.resize(V+1);
	
	int x, y, tmp;
	
	for(int i=0; i<E; i++){
		cin >> x >> y >> tmp;
		vec[x-1].push_back(make_pair(y-1,tmp));
	}
	
	for (int i = 0; i < V; i++) {
        dist.push_back(inf);
    }
    
    dist[K-1] =0;

	dijkstra();
	
	for (int i = 0; i < V; i++) {
        if (dist[i] != inf)
			cout << dist[i] << '\n';
        else
			cout << ("INF\n");
    }
	
	
	return 0;	
}
​void dijkstra() {
	priority_queue< pair<int,int> > pq;
    pq.push({0, K-1});
    
    while (!pq.empty()){
        int i = pq.top().second;
        int d = -1*pq.top().first;
        pq.pop(); 
 
        for (int j = 0; j < vec[i].size(); j++) {
            int nv = dist[i] + vec[i][j].second;
            int bv = dist[vec[i][j].first];
 
            if (nv < bv) {
                dist[vec[i][j].first] = nv;
                pq.push(make_pair(-1*nv, vec[i][j].first));
            }
        }
    }
}
