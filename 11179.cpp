#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >>a;
    vector<int> vec;
    if(a!=1){
        while(true){
            vec.push_back(a%2);
            a=a/2;
            if(a==1) {
                vec.push_back(a);
                break;
            }
        }
    }

    else
        vec.push_back(1);

    int i=0;
    int sum=0;

    while(true){
        sum += *(vec.end()-1)*pow(2,i);
        vec.pop_back();
        if(vec.size()==0)
            break;
        else
            i++;
    }
    cout << sum;

    return 0;
}
