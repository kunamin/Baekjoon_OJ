#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int x, y;
    long long int arr[t]={};
    for (int i=0; i<t; i++){
        cin>>x>>y;
        long long int a=0;
        long long int b=y-x;
        long long int c=0;
        while(true){
            a++;
            if(b>a*a-a-1 && b<=a*a){
                c=2*a-1;
                break;
            }
            else if(b<=a*a+a){
                c=2*a;
                break;
            }
        }
        arr[i]=c;
    }
    for(int i=0; i<t; i++)
        cout << arr[i]<<endl;
    return 0;
}
