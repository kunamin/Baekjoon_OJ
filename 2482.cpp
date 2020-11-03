#include <iostream>

using namespace std;

int main()
{
    int N;
    vector<int> vec;
    vector<int> vect;
    int temp;
    for(int i=0; i<N; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    for(int i=0; i<N; i++) {
        vec.insert(0,vec[N-1]);
        vec.pop_back();
        for(int j=0; j<N-1; j++){
            for(int z=j+1; z<N; z++){
                vect=vec;
                if((z+j)%2==0){
                    int temp1=0;
                    for(int a=0; a<(z+j+1)/2; a++){

                    }
                }
            }
        }
    }


    return 0;
}
