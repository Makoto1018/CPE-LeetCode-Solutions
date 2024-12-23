/* UVA-10093 An Easy Problem! https://vjudge.net/problem/UVA-10093 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    char c;
    while(cin>>c){
        //cout<<c<<endl;
        if(isalnum(c)){
            if(isdigit(c))
                cout << c - '0' + 1 << endl;
            else if(isupper(c))
                cout << c - 'A' + 11 << endl;
            else if(islower(c))
                cout << c - 'a' + 37 << endl;
        }
        else
            cout <<  "such number is impossible!" << endl;
    }
    return 0;
}