#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;

    cin >> N;

    priority_queue<int> pq;

    for(int i=0; i<N; i++){
        int temp;
        cin >> temp;
        pq.push(temp);
    }
    long long int sum=0;
    for(int i=0; i<N/3; i++){
        sum += pq.top();
        pq.pop();
        sum += pq.top();
        pq.pop();
        pq.pop();
    }

    while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
    }

    cout <<sum;

    return 0;
}
