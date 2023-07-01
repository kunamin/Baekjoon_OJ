#include <bits/stdc++.h>

using namespace std;
double calc_dist(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b){
    int x1 = a.first.first;
    int y1 = a.first.second;
    int x2 = b.first.first;
    int y2 = b.first.second;
    int r1 = a.second;
    int r2 = b.second;
    double dist_of_two_points = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    if(dist_of_two_points<= r1 + r2){
        return 0;
    }
    double dist_of_two_perpendicular_points = sqrt(pow(dist_of_two_points,2) - pow(abs(r1 - r2),2));
    double dig_of_a, dig_of_b;
    if(a.second> b.second) {
        dig_of_a = acos(abs(r1 - r2)/dist_of_two_points)*2;
        dig_of_b = (acos(dist_of_two_perpendicular_points/dist_of_two_points) + M_PI_2)*2;
    }
    else {
        dig_of_a = (acos(dist_of_two_perpendicular_points/dist_of_two_points) + M_PI_2)*2;
        dig_of_b = acos(abs(r1 - r2)/dist_of_two_points)*2;
    }
    return (2*M_PI - dig_of_a)*r1 + (2*M_PI - dig_of_b)*r2 + 2*dist_of_two_perpendicular_points;
}

int find(int a , vector<int> &root){
    if(root[a] == a) return a;
    else return root[a] = find(root[a],root);
}

void merge(int x, int y, vector<int> &root, vector<int> &high){
    x = find(x, root);
    y = find(y, root);
    if(x==y) return;
    if (high[x] < high[y]) {
        root[x] = y;
    } else {
        root[y] = x;
        if (high[x] == high[y]) high[x]++;
    }
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >> N;
    vector<pair<pair<int, int>,int>> v(N);
    for(int i=0; i<N; i++){
        cin >> v[i].first.first >> v[i].first.second >> v[i].second;
    }
    vector<pair<double,pair<int,int>>> all_edges(N);
    //vector<bool> visited(N,false);
    double distance =0.0;
    vector<int> root(N);
    vector<int> high(N);
    for(int i=0; i<N-1; i++){
        root[i] = i;
        high[i] = 0;
        for(int j=i+1; j<N; j++){
            double cur_distance = calc_dist(v[i],v[j]);
            all_edges.emplace_back(cur_distance,make_pair(i,j));
        }
    }
    root[N-1] = N-1;
    high[N-1] = 0;
    sort(all_edges.begin(),all_edges.end());
    for(auto edge : all_edges){
        if(N==1) break;
        else if (find(edge.second.first, root) == find(edge.second.second, root)) {
            continue;
        } else {
            distance += edge.first;
            merge(edge.second.first, edge.second.second, root, high);
            N--;
        }
    }
    cout << setprecision(15) << distance;

    return 0;
}