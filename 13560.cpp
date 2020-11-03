#include <bits/stdc++.h>

using namespace std;

int main()
{
   int N;
   cin >>N;
   vector<int> vec;
   int tmp;
   for(int i=0; i<N; i++){
        cin >> tmp;
        vec.push_back(tmp);
   }

   sort(vec.begin(), vec.end(), greater<int>());
    int a=1;
    int sum=0;
    for(int i=0; i<N; i++){
        sum+=vec[i];
   }
   if(sum!=((N)*(N-1)/2))
      a=-1;
    int sum1=0;
    int sum2=0;
   if(a!=-1){

   for(int i=0; i<N; i++){
        sum1+=N-1-i;
       sum2 += vec[i];
        if(sum2>sum1){
            a=-1;
            break;
        }
   }
   }
   cout<<a;

}
