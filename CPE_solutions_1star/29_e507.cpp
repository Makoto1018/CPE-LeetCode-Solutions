/* 10252 - Common Permutation https://zerojudge.tw/ShowProblem?problemid=e507 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string a="", b="";
    while(cin>>a>>b){
        string x="";
        // cout << a << " " << b << endl;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                if(a[i]==b[j]){
                    x += a[i];
                    b.erase(j,1);
                    // b.resize(b.size()-1);
                    break;
                }
            }
        }
        sort(x.begin(),x.end());
        cout << x << endl;
    }
    return 0;
}