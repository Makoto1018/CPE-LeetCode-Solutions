/* 10420 - List of Conquests https://zerojudge.tw/ShowProblem?problemid=a743 */
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int n=0;
    cin >> n;
    string s;
    getline(cin,s);
    map<string,int> mp;
    while(n--){
        getline(cin, s);
        stringstream ss(s);
        ss >> s;
        if (mp.find(s) == mp.end()) {
            mp[s] = 1;
        } else {
            mp[s]++;
        }
    }
    for(auto a : mp){
        cout << a.first << " " << a.second << endl;
    }
    return 0;
}