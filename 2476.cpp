#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >>N;

    vector<int> sum;

    int temp1;

    int temp3=0;

    for(int i=0; i<N; i++){

        vector<int> vec2;
        int temp2=0;
        for(int j=0; j<3; j++){
            cin >> temp1;
            vec2.push_back(temp1);
        }
        if(vec2[0]==vec2[1]) {
            temp3=vec2[0];
            temp2++;
        }
        if(vec2[1]==vec2[2]) {
            temp3=vec2[1];
            temp2++;
        }
        if(vec2[0]==vec2[2]){
            temp3=vec2[0];
            temp2++;
        }
        if(temp2==3) {
            sum.push_back(10000+temp3*1000);

        }
        if(temp2==1) {
            sum.push_back(1000+temp3*100);
        }
        if(temp2==0) {
            sort(vec2.begin(), vec2.end());
            sum.push_back(vec2[2]*100);
        }


    }
    sort(sum.begin(), sum.end());
    cout << sum[N-1];
    return 0;
}
