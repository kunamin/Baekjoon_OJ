#include <bits/stdc++.h>

using namespace std;
#define inf 1000000000
int V, E;



vector<vector<pair<int,int> > > vec;
vector<vector<int> > dist;

bool cmp(const vector<int> &v1, const vector<int> &v2)
{
    if(v1[0] == v2[0])
        return v1[1] < v2[1];
    return v1[0] > v2[0];
}


void dijkstra();



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> V >> E;

	vec.resize(V+1);

	int x, y;

	for(int i=0; i<E; i++){
		cin >> x >> y;
		vec[x-1].push_back(make_pair(y-1,1));
		vec[y-1].push_back(make_pair(x-1,1));
	}

	for (int i = 0; i < V; i++) {
        vector<int> vec1;
        vec1.push_back(inf);
        vec1.push_back(i+1);
        dist.push_back(vec1);
    }
    dist[0][0] = 0;

	dijkstra();

	sort(dist.begin(), dist.end(), cmp);

	int sum=1;
	for(int i =1; i<V; i++){
        if(dist[i-1][0]==dist[i][0])
            sum++;
        else
            break;
	}
    cout << dist[0][1] << " " << dist[0][0] <<" " << sum;


	return 0;
}
void dijkstra() {
	priority_queue< pair<int,int> > pq;
    pq.push({0, 0});

    while (!pq.empty()){
        int i = pq.top().second;
        int d = -1*pq.top().first;
        pq.pop();

        for (int j = 0; j < vec[i].size(); j++) {
            int nv = dist[i][0] + vec[i][j].second;
            int bv = dist[vec[i][j].first][0];

            if (nv < bv) {
                dist[vec[i][j].first][0] = nv;
                pq.push(make_pair(-1*nv, vec[i][j].first));
            }
        }
    }
}
