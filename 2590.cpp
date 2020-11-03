#include <bits/stdc++.h>

using namespace std;

int main()
{
    a[7]={};
    for(int i=1; i<7; i++){
        cin >> a[i];
    }
    int sum=0;
    if(a[6]>0)
        sum+=a[6];


    int temp=0;

    int temp5=0;
    if(a[5]>0){
        sum+=a[5];
        temp =a[1] - a[5]*11;
        if(temp<0){
            a[1]=0;
        }
        else {
            a[1] = temp;
        }
    }
    int temp4=0;

    if(a[4]>0){
        sum+=a[4];
        temp =a[2] - a[4]*5;
        if(temp<0){
            a[2]=0;
            temp4 =(-1)*temp;
            if(a[1]>0){
                temp =a[1] - temp4*4;
                if(temp<0){
                    a[1]=0;
                }
                else {
                    a[1] = temp;
                }
            }

        }
        else {
            a[2] = temp;
        }
    }
    int temp3=0;

    if(a[3]>0) {
        if(a[3]%4==0) {
            sum+=a[3]/4;
        }
        else {
            sum+=a[3]/4+1;
            if(a[3]%4
        }
    }

    return 0;
}
