#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> vec;
    vec.push_back(1);
    int n=0;
    int temp=3;
    while(true){
        if(temp+n*2<N){
            vector<int> tmp;
            tmp=vec;
            n=temp+n*2;
            temp+=1;
            vec.push_back(n+1);
            for(int i =0; i<tmp.size(); i++){
                tmp[i]+=n+temp;
            }
            vec.insert( vec.end(), tmp.begin(), tmp.end() );
        }
        else{
            break;
        }
    }

    vector<int>::iterator it;
    it = find(vec.begin(), vec.end(), N);
    if (it != vec.end()) {

        cout <<'m';
    }
    else {
        cout << 'o';
    }

    return 0;
}
