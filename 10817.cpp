#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a , b, c;
    cin >> a >> b >> c;
    if(a<=b)
    cout << min(max(a, b), max(a , c));
    if(a>b)
        cout << min(max(a, b), max(b , c));

    return 0;
}
