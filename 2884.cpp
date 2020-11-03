#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a , b;
    cin >> a >> b;
    if(b<45 && a>0)
        cout<<(a-1) <<" " <<(b+15);
    else if (b<45 && a==0)
        cout<<23 <<" "<<(b+15);
    else
        cout<<a <<" "<<(b-45);
    return 0;
}
