#include <bits/stdc++.h>

using namespace std;

int main()
{
    int K, N;
    cin >> K >>N;

    vector<long long int> temp1;
    priority_queue<long long int, vector<long long int>, greater<long long int> > vec;
    for(int i=0; i<K; i++){
        int tmp;
        cin >>tmp;
        vec.push(tmp);
        temp1.push_back(tmp);
    }

    int a=1;
    while(a<N){
        for(int i=0; i<K; i++){
            if(vec.top()*temp1[i]<2147483648) {
            vec.push(vec.top()*temp1[i]);
            if(vec.top()%temp1[i]==0) break;
            }
            else break;

        }
        vec.pop();
        a++;
    }

    cout  << vec.top();

    return 0;
}
