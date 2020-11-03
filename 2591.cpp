#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    vector<int> vec;
    int temp = a.length();
    for(int i=0; i<temp; i++){
        vec.push_back(a[i]-48);
    }

    int sum[temp]={};
    sum[0]=1;
if(temp>1)
    if (vec[0]<4) {
        if(vec[0]==3 && vec[1]<5) {
            if(vec[1]==0)
                sum[1] = 1;
            else
                sum[1] = 2;
        }

        else if(vec[0]<3) {
            if(vec[1]==0)
                sum[1] = 1;
            else
                sum[1] = 2;
        }
        else {
            sum[1]=1;
        }
    }
    else
        if(vec[1]!=0)
            sum[1]=1;
        else
            sum[1]=0;
else
    if(vec[0]!=0)
        sum[0]=1;
    else
        sum[0]=0;
if(vec[0]!=0 && sum[1]!=0)
    for(int i=2; i<temp; i++){
        if (vec[i-1]<4) {
            if(vec[i-1]==0) {
                sum[i] = sum[i-1];
                continue;
            }
            if(vec[i-1]==3 && vec[i]<5) {
                if(vec[i]==0)
                    sum[i] = sum[i-2];
                else
                    sum[i] = sum[i-2]+sum[i-1];
                continue;
            }
            if(vec[i-1]<3) {
                if(vec[i]==0)
                    sum[i] = sum[i-2];
                else
                    sum[i] = sum[i-2]+sum[i-1];
                continue;
            }

        }
        if (vec[i]!=0)
            sum[i]=sum[i-1];
        else
            break;
    }
    cout << sum[temp-1];
    return 0;
}

