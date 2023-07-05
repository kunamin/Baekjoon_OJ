#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    int today_month = stoi(today.substr(5,2));
    int today_year = stoi(today.substr(0,4));
    int today_day = stoi(today.substr(8,2));
    map<char, int> m;
    for(auto term: terms){
        m[term[0]] = stoi(term.substr(2));
    }
    for(int i=0; i<privacies.size(); i++){
        int ith_month = stoi(privacies[i].substr(5,2));
        int ith_year = stoi(privacies[i].substr(0,4));
        int ith_day = stoi(privacies[i].substr(8,2));
        ith_month += m[privacies[i][11]];
        if(ith_month > 12){
            ith_year += (ith_month-1)/12;
            ith_month %= 12;
            ith_month = ith_month == 0 ? 12 : ith_month;
        }
        if(ith_day-1 == 0) {
            ith_month--;
            if(ith_month == 0) {
                ith_year--;
                ith_month = 12;
            }
            if(ith_month == 2) {
                if(ith_year % 4 == 0 && ith_year % 100 != 0) {
                    ith_day = 29;
                }
                else if(ith_year % 400 == 0) {
                    ith_day = 29;
                }
                else {
                    ith_day = 28;
                }
            }
            else if(ith_month == 4 || ith_month == 6 || ith_month == 9 || ith_month == 11) {
                ith_day = 30;
            }
            else {
                ith_day = 31;
            }
        }
        else {
            ith_day--;
        }
        if(ith_year < today_year) {
            answer.push_back(i + 1);
        }
        else if(ith_year == today_year && ith_month < today_month){
            answer.push_back(i + 1);
        }
        else if(ith_year == today_year && ith_month == today_month && ith_day < today_day){
            answer.push_back(i + 1);
        }
    }
    return answer;
}