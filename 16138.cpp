#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, m;
    int temp1, temp2;
    cin >> a >> b;
    cin >> m;

    vector< vector<float> > vec;
    vector<float> vec2(3);
    for(int i=0; i<m; i++){
        cin >> temp1 >> temp2;
        vec2[1] = temp1;
        vec2[2] = temp2;

        if(vec2[1]==0) {
            if(vec2[2]>0) {
                vec2[0]=101;
            }
            else {
                vec2[0]=-101;
            }
        }

        else{
            vec2[0]= (float)temp2/(float)temp1;
        }

        vec.push_back(vec2);
    }

    sort(vec.begin(), vec.end(), greater< vector<float> >());

    int sum1, sum2=0;
    int i=0;
    int tempsum=0;

    while(true){
        if(i>m)
            break;

        temp1 = vec[i][1];
        temp2 = vec[i][2];
        tempsum += temp1;

        if(tempsum>b) {
            break;
        }

        else if(tempsum >= a && temp2 < 0) {
            sum2 += temp2;
            break;

        }

        else if(tempsum == b){
            sum2 += temp2;
            break;
        }

        else {
            sum1 += temp1;
            sum2 += temp2;
            i++;
        }

    }

    cout << sum2;

    return 0;
}
