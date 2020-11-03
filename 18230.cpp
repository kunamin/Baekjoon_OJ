#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, A, B;
    cin >>  N >>A >>B;
    vector<int> vec1;
    for(int i=0; i<A; i++){
        int temp;
        cin >> temp;
        vec1.push_back(temp);
    }

    vector<int> vec2;
    for(int i=0; i<B; i++){
        int temp;
        cin >> temp;
        vec2.push_back(temp);
    }
    sort(vec1.begin(), vec1.end(), greater<int>());
    sort(vec2.begin(), vec2.end(), greater<int>());
    long long int sum=0;
    int a=0;
    while(a<N){
        if((N-a)%2 ==0 && vec1.size()==1) {
            sum+=*(vec2.begin());
            vec2.erase(vec2.begin());
            a+=2;
        }
        else {
            if(vec1.size()==0) {
                if((N-a)==1) {
                break;
                }
                sum+=*(vec2.begin());
                vec2.erase(vec2.begin());
                a+=2;
            }
            else if(vec2.size()==0){
                sum+=*(vec1.begin());
                vec1.erase(vec1.begin());
                a+=1;
            }
            else {
                if(vec1.size()==1){
                    if(*(vec1.begin()) < *(vec2.begin()) && (a+1) != N){
                        sum+=*(vec2.begin());
                        vec2.erase(vec2.begin());
                        a+=2;
                    }
                    else {
                        sum+=*(vec1.begin());
                        vec1.erase(vec1.begin());
                        a+=1;
                    }
                }
                else {
                    if(*(vec1.begin())+*(vec1.begin()+1) < *(vec2.begin()) && (a+1) !=N){
                        sum+=*(vec2.begin());
                        vec2.erase(vec2.begin());
                        a+=2;
                    }
                    else{
                        sum+=*(vec1.begin());
                        vec1.erase(vec1.begin());
                        a+=1;
                    }
                }
            }
        }
    }

    cout << sum;

    return 0;
}
