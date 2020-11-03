#include <bits/stdc++.h>

using namespace std;

vector<int> x;

int main()
{
    int N;
    cin >> N;
    vector<int> all;
    vector<int> x(N);
    int a, b, temp;
    for(int i=0; i<N; i++){

        for(int j=0; j<N; j++){
            cin >> x[j];
        }
        for(a=0; a<N-1; a++){
            b = a;
            while(x[b] > x[b+1]){
                temp = x[b];
                x[b] = x[b+1];
                x[b+1] = temp;
                b--;
        }
    }
        for(int j=N-1; j>N-2-i; j--){
            all.push_back(x[j]);
        }
    }
    for(a=0; a<all.size()-1; a++){
            b = a;
            while(all[b] > all[b+1]){
                temp = all[b];
                all[b] = all[b+1];
                all[b+1] = temp;
                b--;
        }
    }
    cout<< all[all.size()-N];
}
