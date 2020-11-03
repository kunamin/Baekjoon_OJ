#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int P, N;
    cin >> P >> N;

    vector<int> vec;

    for(int i=0; i<N; i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());

    int sum = 0;
    int j=0;
    while(true){
        if (sum + vec[j] < P && j<N) {
            sum += vec[j];
            j++;
        }
        else {
            j--;
            break;
        }
    }
    long long int Ans = 0;
    long long int tmp = P-sum-1;

    for (int i=j; i>-1; i--){
        tmp += vec[i];
        Ans +=tmp;
    }

    cout << (j+1) <<" " << Ans;

    return 0;
}
