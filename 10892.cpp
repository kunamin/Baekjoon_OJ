#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;

    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    cin >> N;
    for (int i=1; i<3*N+1; i++){
        int a, b;
        cin >> a >> b;
        pq.push(make_pair(a,i));
    }
    for (int i=0; i<N; i++){
        cout << pq.top().second << " ";
        pq.pop();
        cout << pq.top().second << " ";
        pq.pop();
        cout << pq.top().second << "\n";
        pq.pop();
    }

    return 0;
}
