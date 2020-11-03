#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t] = {};

    for (int k=0; k<t; k++){

        int n;
        cin >> n;
        vector< vector<int> > vec;
        vector<int> vec2(n+1);

        vec.push_back(vec2);
        vec.push_back(vec2);

        for(int i=1; i<n+1; i++){
            cin >> vec[0][i];
        }

        for(int i=1; i<n+1; i++){
            cin >> vec[1][i];
        }
        int y=0;

        for(int i=2; i<n+1; i++){
            if(vec[0][i-1]>vec[0][i-2]) {
                vec[1][i]+=vec[0][i-1];
            }
            else {
                vec[1][i]+=vec[0][i-2];
            }

            if(vec[1][i-1]>vec[1][i-2]) {
                vec[0][i]+=vec[1][i-1];
            }
            else {
                vec[0][i]+=vec[1][i-2];
            }

        }
        if (vec[0][n]>vec[1][n])
            arr[k]=vec[0][n];
        else
            arr[k]=vec[1][n];

    }
    for(int i=0; i<t; i++)
        cout << arr[i] << endl;
}
