#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;

	cin >> N >> M;

	vector<string> v;

	for(int i=0; i<N; i++){
        string s;
        cin >> s;
        v.push_back(s);
	}


    vector<string>::iterator iter;

    vector<string> ans;
    vector<string> v1;

    for(int i=0; i<M; i++){
        string s;
        cin >> s;
        v1.push_back(s);
    }

    if(N>M){
        for(int i=0; i<N; i++){
            iter = find(v1.begin(), v1.end(), v[i]);
            if(iter !=v.end())
            ans.push_back(*iter);
        }
    }
    else{
        for(int i=0; i<M; i++){
            iter = find(v.begin(), v.end(), v1[i]);
            if(iter !=v.end())
            ans.push_back(*iter);
        }
    }

    sort(ans.begin(), ans.end());

    cout << ans.size() << "\n";
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << "\n";
    }

    return 0;
}
