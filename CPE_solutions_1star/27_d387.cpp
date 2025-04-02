/* 10235 - Simply Emirp https://zerojudge.tw/ShowProblem?problemid=d387 */
#include <iostream>
using namespace std;
int main(){
    int n=0;
    while(cin>>n){
        if(n==1){
            cout << n << "is not prime.";
            continue;
        }
        bool isprime=true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                isprime = false;
                break;
            }
        }
        if(isprime){
            int reverse=0, tmp=n;
            while(tmp>0){
                reverse = (reverse * 10) + (tmp % 10);
                tmp /= 10;
            }
            if(reverse == n){
                cout << n <<" is prime." << endl;
                continue;
            }
            bool isemirp=true;
            for(int i=2;i*i<=reverse;i++){
                if(reverse%i==0){
                    isemirp = false;
                    break;
                }
            }
            if(isemirp)
                cout << n <<" is emirp." << endl;
            else 
                cout << n <<" is prime." << endl;
        }
        else
            cout << n <<" is not prime." << endl;
    }
}