#include <bits/stdc++.h>


using namespace std;


int main()
{
    int N;
    cin >> N;
    vector< vector<char> > vec;
    for(int i=0; i<N; i++){
        vector<char> vec1;
        char a[8]={};
        cin >> a[8];
        for(int j=0; j<8; j++){
            vec1.push_back(a[j]);
        }
        vec.push_back(vec1);
    }
    int bit1[18]={0,};
    int bit2[18]={0,};
    int tmp, tmp1, tmp2, temp;
    for(int j=0; j<N; j++) {
        cout<<'0'<<endl;
        for(int i=0; i<3; i++) {
            tmp1 = vec[j][i*3]-'0';
            tmp1*=10;
            tmp2 = vec[j][i*3+1]-'0';
            tmp=tmp1+tmp2;
            int ttemp=5;

            while(ttemp==-1) {
                temp = tmp%2;
                bit1[ttemp*3+i] = temp;
                bit2[i*6+ttemp] = temp;
                tmp=tmp/2;
                ttemp-=1;
                if(tmp==1) break;

            }
        }
        for(int i=0; i<18; i++) {
            cout << bit1[i];
        }
        cout << ' ';
        for(int i=0; i<18; i++) {
            cout << bit2[i];
        }
        cout <<endl;
    }
    return 0;
}
