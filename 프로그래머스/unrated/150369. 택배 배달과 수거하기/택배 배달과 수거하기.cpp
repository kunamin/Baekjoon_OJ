#include <vector>
#include <iostream>
using namespace std;

long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
    long long answer = 0;
    vector<int> deliveries_ = deliveries;
    vector<int> pickups_ = pickups;

    int i_deli=n-1;
    int i_pick=n-1;
    while(i_deli >= 0 || i_pick >= 0){
        while(i_deli >= 0 && deliveries_[i_deli] == 0) i_deli--;
        while(i_pick >= 0 && pickups_[i_pick] == 0) i_pick--;
        answer += ((i_deli > i_pick ? i_deli : i_pick)+1)*2;

        int cap_deli = cap;
        int cap_pick = cap;
        while(cap_deli > 0 && i_deli >= 0){
            if(deliveries_[i_deli] - cap_deli > 0){
                deliveries_[i_deli] -= cap_deli;
                cap_deli = 0;
            }
            else{
                cap_deli -= deliveries_[i_deli];
                deliveries_[i_deli] = 0;
                i_deli--;
            }
        }
        while(cap_pick > 0 && i_pick >= 0) {
            if(pickups_[i_pick] - cap_pick > 0){
                pickups_[i_pick] -= cap_pick;
                cap_pick = 0;
            }
            else{
                cap_pick -= pickups_[i_pick];
                pickups_[i_pick] = 0;
                i_pick--;
            }
        }
    }


    return answer;
}