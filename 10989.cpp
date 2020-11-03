#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int N;
    cin >>N;
    vector<int> vec(10001);
    for(int i=0; i<N; i++){
        int tmp;
        cin >> tmp;
        vec[tmp] += 1;
    }

    for(int i=1; i<10001; i++){
        for(int j=0; j<vec[i]; j++){
            cout << i << "\n";
        }
    }
    return 0;
}

