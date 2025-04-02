/* 10783 - Odd Sum https://zerojudge.tw/ShowProblem?problemid=c022 */
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int n=0;
    cin >> n;
    int t=1;
    while(n--){
        int bot, top;
        cin >> bot >> top;
        if(bot%2==0)
            bot += 1;
        if(top%2==0)
            top -= 1;
        int height = (top - bot) / 2 + 1;
        cout << "Case " << t << ": " << (bot + top) * height / 2 << endl;
        t++;
    }
    return 0;
}