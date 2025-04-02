/* 10222 - Decode the Mad man https://zerojudge.tw/ShowProblem?problemid=e578 */
#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    // map<char, char> mymap{
    //     {'',''}
    //     {'k','h'}
    // };
    string table = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s;
    while(getline(cin,s)){
        for(int i=0;i<s.size();i++){
            int target=0;;
            for(target=0;target<table.size();target++){
                if(table[target]==s[i])
                    break;
            }
            if(target==table.size())
                cout << " ";
            else{
                target -= 2;
                if(target<0)
                    target += table.size();
                cout << table[target];
            }
        }
        cout << endl;
    }
    return 0;
}