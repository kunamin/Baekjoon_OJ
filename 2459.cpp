#include <bits/stdc++.h>

using namespace std;


int main() {

    int n, k, l;
	cin >>n >> k;
    vector< vector<int> >p;
    vector<int> vec(2);
	for (int i = 0; i < k; i++) {
        cin >>  vec[0] >> vec[1];
        p.push_back(vec);
	}
	vec[0]=1;
	vec[1]=1;
	p.push_back(vec);
    k++;
	cin >> l;

	int x = 1, y = 1, acc = 0;
	vector<int> tmp;

    int nx, ny;
	for (int i = 0; i < k; i++) {
        nx = p[i][0], ny = p[i][1];
		if (nx <= l && l < x) {
			tmp.push_back(acc + abs(l - x) - 1);
			acc = abs(l - nx);
		}
		else if (x <= l && l < nx) {
			tmp.push_back(acc + abs(l - x) + 1);
			acc = abs(l - nx);
		}
		else
			acc += abs(nx - x) + abs(ny - y);

		x = nx, y = ny;
	}
	tmp[0] += acc;
	sort(tmp.begin(), tmp.end());
	int temp = tmp.size();
	cout << tmp[temp-1];

	return 0;
}