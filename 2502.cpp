#include <bits/stdc++.h>

using namespace std;

int main()
{
    int D, K;

    cin >> D >> K;

    vector<int> vec(2, 1);

    vector<int> sum(D, 0);

    while(true){
        sum[0]=vec[0];
        sum[1]=vec[1];
        for(int i=2; i<D; i++){
            sum[i]=sum[i-1]+sum[i-2];
        }

        if(sum[D-1]<K){

            vec[1] +=1;

        }
        else if(sum[D-1]>K) {

            vec[0] +=1;
            vec[1] = vec[0];

        }
        else {
            break;
        }

    }
    cout << vec[0] << endl << vec[1];

    return 0;
}
