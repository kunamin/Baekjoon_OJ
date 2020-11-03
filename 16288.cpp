#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, k;
    cin >> N >> k;

    vector<int> vec(N);
    for(int i =0; i< N; i++){
        cin >> vec[i];
    }
    queue<int> pass[101];
    string s;
    for(int i=0; i<N; i++){
		s = "NO";
		for(int j=1; j<=k; j++){
			if(pass[j].empty()){
                //cout << j <<" 빈데 " <<vec[i] <<endl;;
				pass[j].push(vec[i]);
				s = "YES";
				break;
			}
			if(vec[i] > pass[j].back()){
			    //cout << j <<" 있는데 " <<vec[i]<<endl;
				pass[j].push(vec[i]);
				s = "YES";
				break;
			}
		}

    if(s=="NO")
        break;
	}
	cout << s;
	return 0;
}
