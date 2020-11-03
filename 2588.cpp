#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    string b;
    cin >> a >> b;

    cout << a*(b[2]-48)<<endl <<a*(b[1]-48) << endl <<a*(b[0]-48) <<endl;
    cout << a*(b[2]-48)+a*(b[1]-48)*10+a*(b[0]-48)*100;
    return 0;
}
