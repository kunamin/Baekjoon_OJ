#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    cin >> N;

    vector<int>vec;

    for(int i=0; i<N; i++){
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
    }
    int ans=0;
    for(int i=N-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(vec[j]>vec[j+1]){
                vec.insert(vec.begin()+j, vec[j+1]);
                vec.erase(vec.begin()+j+2);
                ans++;
            }
        }
    }

    cout << ans;
    return 0;
}
