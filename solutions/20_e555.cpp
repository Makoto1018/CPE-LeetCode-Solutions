/* 10170 - The Hotel with Infinite Rooms https://zerojudge.tw/ShowProblem?problemid=e555 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int s=0;
    long long int d=0;
    while(cin>>s>>d){
        long long int total=0;
        int i=s;
        while(true){
            total += i;
            if(total>=d)
                break;
            i += 1;
        }
        cout << i << endl;
    }
}