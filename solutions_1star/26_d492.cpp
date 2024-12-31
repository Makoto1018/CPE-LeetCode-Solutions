/* 10226 - Hardwood species https://zerojudge.tw/ShowProblem?problemid=d492 */
#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;

int main(){
    int td;
    cin >> td;
    cin.ignore();
    cin.ignore();
    for(int test=0;test<td;test++){
        string s;
        int total=0;
        map<string, int> mymap;
        while(getline(cin,s)){
            if(s == "")
                break;
            else{
                mymap[s] ++;
                total ++;
            }
        }
        //cout << total;
        for(auto a : mymap){
            cout << a.first << " " << fixed << setprecision(4) << (double)a.second / total * 100 << endl;
        }
        cout << endl;
    }
    return 0;
}