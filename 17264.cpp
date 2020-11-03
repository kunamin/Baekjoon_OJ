#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, P;
    cin >> N >> P;

    int W, L, G;

    cin >> W >> L >> G;

    map<string, char> m;

    for(int i=0; i<P; i++){
        string s;
        char c;
        cin >> s >> c;
        m.insert(make_pair(s, c));
    }

    int sum=0;
    bool b=false;

    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        char c = (*m.find(s)).second;
        if(c=='W'){
            sum+=W;
            if(sum>=G){
                b=true;
            }
        }
        else{
            sum-=L;
            if(sum<0){
                sum=0;
            }
        }
    }

    if(b){
        cout << "I AM NOT IRONMAN!!";
    }
    else {
        cout << "I AM IRONMAN!!";
    }
    return 0;
}
