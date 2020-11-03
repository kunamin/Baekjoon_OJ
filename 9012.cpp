#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<string> vec;
    int z=0;
    string a;
    while(true){
        getline(cin, a);
        vec.push_back(a);
        if (a==".")
            break;
        z++;
    }
    stack<char> s;
    int y=0;
    while (y!=z) {
        if(vec[y].find('(')>100 or vec[y].find(')')>100) {
            cout << "no" << endl;
            y++;
            continue;
        }
        if(vec[y].find('(') > vec[y].find(')')) {
            cout << "no" << endl;
            y++;
            continue;
        }
        for(int i=0; i<vec[y].size(); i++) {
            if(vec[y].at(0) == '(') {
                s.push('(');
                vec[y].erase(0, 1);
                continue;
               }
            if(vec[y].at(0) == ')') {
                if(!s.empty())
                    s.pop();
                else
                    cout << "no" <<endl;
               }
            vec[y].erase(0, 1);

        }
        if(s.empty())
            cout << "yes" <<endl;
            y++;
    }

}
