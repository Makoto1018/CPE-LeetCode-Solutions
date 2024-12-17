/* 10062 - Tell me the frequencies! https://zerojudge.tw/ShowProblem?problemid=c012 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    while(getline(cin,s)){
        vector<pair<char,int>> vec;
        for(int i=0;i<s.size();i++){
            bool recorded = false;
            int tmp;
            for(int j=0;j<vec.size();j++){
                if(s[i]==vec[j].first){
                    recorded=true;
                    vec[j].second += 1;
                    break;
                }
            }
            if(!recorded)
                vec.push_back({s[i],1});
        }
        sort(vec.begin(),vec.end(),[](pair<char,int> &a,pair<char,int> &b){
            if(a.second!=b.second){
                if(a.second<b.second)
                    return true;
                else
                    return false;
            }
            else{
                if(a.first>b.first)
                    return true;
                else
                    return false;
            }
        });
        for(int tmp=0;tmp<vec.size();tmp++){
            cout << int(vec[tmp].first) << " " << vec[tmp].second << endl;
        }
        cout << endl;
    }
    return 0;
}