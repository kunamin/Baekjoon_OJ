#include <bits/stdc++.h>

using namespace std;

class Cut {
public:
    long long x1, y1, x2, y2, w;
    long long unsigned int Consumed;
    Cut(long long x1, long long y1, long long x2, long long y2, long long w) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
        this->w = w;
        this->Consumed = w;
    }

    static bool comp(Cut c1, Cut c2) {
        return c1.w < c2.w;
    }
    static bool overlap(Cut c1, Cut c2) {
        long long vx1 = c1.x2 - c1.x1;
        long long vy1 = c1.y2 - c1.y1;
        long long vx2 = c2.x1 - c1.x1;
        long long vy2 = c2.y1 - c1.y1;
        long long vx3 = c2.x2 - c1.x1;
        long long vy3 = c2.y2 - c1.y1;
        long long product1 = (vx1 * vy2 - vy1 * vx2);
        long long product2 = (vx1 * vy3 - vy1 * vx3);
        if(product1 < 0 && product2 < 0) {
            return false;
        } else if(product1 > 0 && product2 > 0) {
            return false;
        } else {
            return true;
        }
    }
};



int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >> N;
    vector<Cut> Cuts;
    for(int i = 0; i < N; i++) {
        long long x1, y1, x2, y2, w;
        cin >> x1 >> y1 >> x2 >> y2 >> w;
        Cut c = Cut(x1, y1, x2, y2, w);
        Cuts.push_back(c);
    }

    sort(Cuts.begin(), Cuts.end(), Cut::comp);

    for(int i = 0; i < N; i++) {
        for(int j = i+1; j < N; j++) {
            if(Cut::overlap(Cuts[i], Cuts[j]) && Cut::overlap(Cuts[j], Cuts[i])) {
                Cuts[i].Consumed+=Cuts[i].w;
            }
        }
    }
    long long unsigned int ans = 0;
    for(int i = 0; i < N; i++) {
        ans += Cuts[i].Consumed;
    }
    cout << ans;
    return 0;
}