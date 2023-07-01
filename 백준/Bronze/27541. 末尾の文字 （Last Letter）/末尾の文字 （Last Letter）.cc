#include <bits/stdc++.h>

using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >>N;
    string s;
    cin >>s;
    if(s[N-1]=='G'){
        s.pop_back();
    }
    else{
        s.push_back('G');
    }
    cout <<s;
    return 0;
}