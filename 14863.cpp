#include <bits/stdc++.h>

using namespace std;

int tme[101][2], money[101][2], d[101][100001];

int main() {
    int n, k, ans = 0;

    cin >> n >> k;

    for (int i = 1;i <= n;++i)
        cin >> tme[i][0] >> money[i][0] >> tme[i][1] >> money[i][1];

    for (int i = 1;i <= k;++i)
        d[1][i] = max(tme[1][0] > i ? 0 : money[1][0], tme[1][1] > i ? 0 : money[1][1]);
    for (int i = 2;i <= n;++i)
        for (int j = 1;j <= k;++j) {
            if (j >= tme[i][0] && d[i - 1][j - tme[i][0]] != 0)
                d[i][j] = d[i - 1][j - tme[i][0]] + money[i][0];
            if (j >= tme[i][1] && d[i - 1][j - tme[i][1]] != 0)
                d[i][j] = max(d[i][j], d[i - 1][j - tme[i][1]] + money[i][1]);
        }

    cout << d[n][k];

    return 0;
}
