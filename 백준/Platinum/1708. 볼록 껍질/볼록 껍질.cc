 #include <bits/stdc++.h>

using namespace std;
#define ll long long
ll curr_x, curr_y;

int ccw (pair<ll,ll> a, pair<ll,ll> b, pair<ll,ll> c) {
    long long x1 = a.first - b.first;
    long long y1 = a.second - b.second;
    long long x2 = b.first - c.first;
    long long y2 = b.second - c.second;
    long long op = x1*y2 - x2*y1;
    if (op > 0) return 1;
    if (op == 0) {
        if(x1*x2>0 && y1*y2>0) return 0;
        else return -1;
    }
    else return -1;
}

bool cmp1(pair<ll,ll> a, pair<ll,ll> b) {
    if(a.second == b.second) return (a.first > b.first);
    return a.second < b.second;
}

bool cmp2(pair<ll,ll> a, pair<ll,ll> b) {
    if(ccw({curr_x, curr_y}, a, b) == -1) return false;
    else return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >> N;
    vector<pair<ll,ll>> v(N);
    for(int i = 0; i < N; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp1);
    auto it = v.begin();
    curr_x = it->first;
    curr_y = it->second;
    v.erase(it);
    sort(v.begin(), v.end(), cmp2);
    pair<ll,ll> first;
    pair<ll,ll> next;
    ll ans = 2;
    first = {curr_x, curr_y};
    next = {v[0].first, v[0].second};
    stack<pair<ll,ll>> s;
    for(int i = 1; i < N-1; i++) {
        if(ccw(first, next, v[i]) == 1) {
            ans++;
            s.push(first);
            first = next;
            next = v[i];
        }
        else if (!s.empty()){
            next = first;
            first = s.top();
            while(!s.empty()) {
                if (ccw(first, next, v[i]) != 1) {
                    ans--;
                    s.pop();
                    next = first;
                    first = s.top();
                } else {
                    first = next;
                    next = v[i];
                    break;
                }
            }
        }
        else {
            next = v[i];
        }
    }
    if(ccw(first, next, {curr_x, curr_y}) != 1) ans--;
    cout << ans;
    return 0;
}