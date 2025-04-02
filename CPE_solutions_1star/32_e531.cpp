/* 10415 - Eb Alto Saxophone Player https://zerojudge.tw/ShowProblem?problemid=e531 */
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main(){
    map<char, vector<bool>> mymap = 
    {
        {'c',{0,1,1,1,0,0,1,1,1,1}},
        {'d',{0,1,1,1,0,0,1,1,1,0}},
        {'e',{0,1,1,1,0,0,1,1,0,0}},
        {'f',{0,1,1,1,0,0,1,0,0,0}},
        {'g',{0,1,1,1,0,0,0,0,0,0}},
        {'a',{0,1,1,0,0,0,0,0,0,0}},
        {'b',{0,1,0,0,0,0,0,0,0,0}},
        {'C',{0,0,1,0,0,0,0,0,0,0}},
        {'D',{1,1,1,1,0,0,1,1,1,0}},
        {'E',{1,1,1,1,0,0,1,1,0,0}},
        {'F',{1,1,1,1,0,0,1,0,0,0}},
        {'G',{1,1,1,1,0,0,0,0,0,0}},
        {'A',{1,1,1,0,0,0,0,0,0,0}},
        {'B',{1,1,0,0,0,0,0,0,0,0}}
    };
    int n;
    cin >> n;
    cin.ignore();
    while(n>0){
        string str;
        vector<bool> used(10,0);
        vector<int> counter(10,0);
        getline(cin,str);
        for(int i=0;i<str.size();i++){
            for(int j=0;j<10;j++){
                if(mymap[str[i]][j]){
                    if(used[j])
                        continue;
                    else{
                        used[j] = 1;
                        counter[j] += 1;
                    }
                }
                else
                    used[j] = 0;
            }
        }
        for(int i=0;i<counter.size();i++){
            if(i==9)
                cout << counter[i] << endl;
            else
                cout << counter[i] << " ";
        }
        n -= 1;
    }
    return 0;
}