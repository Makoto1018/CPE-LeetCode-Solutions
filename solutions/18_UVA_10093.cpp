/* UVA-10093 An Easy Problem! https://vjudge.net/problem/UVA-10093 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    while(getline(cin,s)){
        //cout<<c<<endl;
        int max=1;
        int total=0;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                int tmp=0;
                if(isdigit(s[i]))
                    tmp = s[i] - '0';
                else if(isupper(s[i]))
                    tmp = s[i] - 'A' + 10;
                else if(islower(s[i]))
                    tmp = s[i] - 'a' + 36;
                if(tmp>max)
                    max = tmp;
                total = total + tmp;
            }
        }
        bool printed=false;
        for(int i=max;i<62;i++){
            if(total%i==0){
                cout << i+1 <<endl;
                printed = true;
                break;
            }
        }
        if(!printed)
            cout << "such number is impossible!" << endl;
    }
    return 0;
}