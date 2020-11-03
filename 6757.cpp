#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int b= 1;
    int c= 0;
    int d= 0;

    while(b<=a) {
        vector<int> vec;
        b++;
        c=a;
        while(true) {
            if(c<b){
                vec.insert(vec.begin(), c);
                break;
            }
            vec.insert(vec.begin(), c%b);
            c=c/b;

        }
        for (int i=0; i<vec.size(); i++)
        for (int i=0; i<vec.size()/2; i++){
            if(vec[i] != vec[vec.size()-i]) {
                d++;
                break;
            }
        }
        if(d==0)
            cout << b <<endl;
    }


    return 0;
}
