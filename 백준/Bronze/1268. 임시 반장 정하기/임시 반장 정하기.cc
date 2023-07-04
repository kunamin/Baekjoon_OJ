#include <bits/stdc++.h>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >> N;

    vector<vector<int>> v(5, vector<int>(N));
    vector<int> max_cnt(N);
    for(int i=0; i<N; i++){
        cin >> v[0][i] >> v[1][i] >> v[2][i] >> v[3][i] >> v[4][i];
    }
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(v[0][i] == v[0][j] || v[1][i] == v[1][j] || v[2][i] == v[2][j] || v[3][i] == v[3][j] || v[4][i] == v[4][j]){
                max_cnt[i]++;
                max_cnt[j]++;
            }
        }
    }
    cout << max_element(max_cnt.begin(), max_cnt.end())-max_cnt.begin()+1;
    return 0;
}