#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<string> vec;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        vec.push_back(s);
    }
    vector<pair<int, char> > qur;
    for(int i=0; i<M; i++){
        int tmp;
        char c;
        cin >> tmp >> c;
        qur.push_back(make_pair(tmp,c));
    }

    return 0;
}
