#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    int temp= t;
    int vec[t+1][2];
    while (temp--) {
        scanf("%d %d", &vec[temp][0], &vec[temp][1]);

    }
    while (t--) {

        printf("%d\n", (vec[t][0] + vec[t][1]));

    }
    return 0;
}
