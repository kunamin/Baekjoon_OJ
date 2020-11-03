#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> vec1;
    vector<int> vec2;
    for(int i=0; i<N; i++){
        int tmp;
        cin >> tmp;
        vec1.push_back(tmp);
    }

    int M;
    cin >> M;

    for(int i=0; i<M; i++){
        int tmp;
        cin >> tmp;
        vec2.push_back(tmp);
    }
    sort(vec1.begin(), vec1.end());

    for(int i=0; i<M; i++){
        int st=0;
        int ed= N-1;
        int ans=0;
        while(st<=ed){
            int mid = (st+ed)/2;

            if(vec1[mid]==vec2[i]){
                ans=1;
                break;
            }
            else if(vec1[mid]<vec2[i]){
                st = mid+1;
            }
            else{
                ed = mid -1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
