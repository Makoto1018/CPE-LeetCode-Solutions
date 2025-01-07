/* 10268 - 498-bis https://zerojudge.tw/ShowProblem?problemid=f444 */
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    long long int x;
    while(cin>>x){
        cin.ignore();
        string s;
        stringstream ss;
        long long int tmp;
        vector<long long int> vec;
        getline(cin,s);
        ss.str(s);
        
        while(ss>>tmp){
            vec.push_back(tmp);
        }
        int j=0;
        long long int res=0;
        for(int i=vec.size()-1;i>0;i--){
            res += i * vec[j] * pow(x,i-1);
            j++;
        }
        cout << res << endl;
    }
    return 0;
}