#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    cin >> N;
    vector<string> vec;
    vec.push_back("");
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        if(s.at(0)=='t'){
            char c;
            int t;
            cin >> c >> t;
            for(int j=(t-vec.size()); j>0; j--){
                vec.push_back(vec[t-j-1]);
            }
            vec.push_back(vec[t-1]);
            vec[t].push_back(c);
        }

        else{
            int c;
            int t;
            cin >> c >> t;
            for(int j=(t-vec.size()); j>0; j--){
                vec.push_back(vec[t-j-1]);
            }
            vec.push_back(vec[t-c-1]);
        }
    }

    cout <<vec[vec.size()-1];
    return 0;
}
