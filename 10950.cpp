#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    queue< pair<int, int> > q;
    int tmp1, tmp2;
    for(int i =0; i<a; i++){
        cin >> tmp1 >> tmp2;
        q.push(pair<int, int>(tmp1, tmp2));
    }
    while(!q.empty()){
        cout << (q.front().first+q.front().second) <<endl;
        q.pop();
    }
    return 0;
}
