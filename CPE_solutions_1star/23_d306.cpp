/* 10193 - All You Need Is Love https://zerojudge.tw/ShowProblem?problemid=d306 */
// GCD
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int gcd(int m, int n);

int main(){
    int test=0;
    cin >> test;
    cin.ignore();
    for(int t=0;t<test;t++){
        string s,l;
        cin>>s>>l;
        long long int is=0, il=0;
        // cout << s.size();
        for(int i=0;i<s.size();i++){
            is += (s[s.size()-1-i] - '0') * pow(2,i);
        }
        for(int i=0;i<l.size();i++){
            il += (l[l.size()-1-i] - '0') * pow(2,i);
        }
        // cout << "is: " << is << ", il: " << il << endl;
        long long int res;
        if(is<il)
            res = gcd(il,is);
        else
            res = gcd(is,il);
        if(res!=1)
            cout << "Pair #" << t+1 << ": All you need is love!" << endl;
        else
            cout << "Pair #" << t+1 << ": Love is not all you need!" << endl;
    }
    return 0;
}
int gcd(int m, int n){
    int res = 1;
    while(res!=0){
        res = m % n;
        m = n;
        n = res;
    }
    return m;
}