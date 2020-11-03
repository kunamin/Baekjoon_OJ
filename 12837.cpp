#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, Q;
    scanf("%d %d", &N, &Q);

    vector<int> vec1(N+1, 0);
    //vector<long long int> vec2;
    for(int i=0; i<Q; i++){
        int tmp1, tmp2, tmp3;
        scanf("%d %d %d", &tmp1, &tmp2, &tmp3);
        if(tmp1==1){
            vec1[tmp2]+=tmp3;
        }
        else {
            long long int sum=0;
            for(int j=tmp2; j<tmp3+1; j++){
                sum+=vec1[j];

            }
            printf("%lld\n", sum);
        }
    }

    //for(int i=0; i<vec2.size(); i++){
      //   vec2[i]);
   // }


    return 0;
}
