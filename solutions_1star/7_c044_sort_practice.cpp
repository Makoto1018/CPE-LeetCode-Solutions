#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n=0;
    string s;
    vector <pair<char, int>> vec(26,{0,0});

    for(int i=0;i<26;i++){
        vec[i].first = 'A' + i;
    }
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,s);
        for(char c:s){
            if(isalpha(c)){
                if(isupper(c))
                    vec[c-'A'].second++;
                else if(islower(c))
                    vec[c-'a'].second++;
            }
        }
    }
    //sort(開始, 結束, 比較func)
    //true：表示 a 應排在 b 前面。
    //false：表示 b 應排在 a 前面。
    sort(vec.begin(), vec.end(), [](pair<char,int> &ptr, pair<char,int> &ptr2){
        if(ptr.second != ptr2.second)
            if (ptr.second > ptr2.second)
                return true;
            else
                return false;
        else
            if(ptr.first < ptr2.first)
                return true;
            else
                return false;
    });
    for(int i=0;i<26;i++){
        if(vec[i].second == 0)
            continue;
        else
            cout << vec[i].first << " " << vec[i].second << endl;
    }
    return 0;
}