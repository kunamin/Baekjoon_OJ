#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;

    cin >> N;
    priority_queue<pair<pair<float, int>, int>, vector<pair<pair<float, int>, int> >, greater<pair<pair<float, int>, int> > > pq;
    for(int i=1; i<N+1; i++){
        float a, b;
        cin >> a >>b;
        pq.push(make_pair(make_pair(a/b,b),i));
    }

    for(int i=0; i<N; i++){
        cout << pq.top().second <<" ";
        pq.pop();
    }
    return 0;
}
