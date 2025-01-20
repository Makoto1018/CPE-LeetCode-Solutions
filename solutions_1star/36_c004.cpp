/* 10812 - Beat the Spread! https://zerojudge.tw/ShowProblem?problemid=c004 */
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int n=0;
    cin >> n;
    while(n--){
        int sum, diff;
        cin >> sum >> diff;
        if((sum+diff)%2==1){
            cout << "impossible" << endl;
            continue;
        }
        int win = (sum + diff) / 2;
        int lose = sum - win;
        if(win<0||lose<0)
            cout << "impossible" << endl;
        else
            cout << win << " " << lose << endl;
    }
    return 0;
}