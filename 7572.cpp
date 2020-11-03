#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    N--;
    int a=N%60;
    int b=a%10;
    int c=a%12;
    char B[10]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char C[12]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'};
    cout << C[c] << B[b];
    return 0;
}
