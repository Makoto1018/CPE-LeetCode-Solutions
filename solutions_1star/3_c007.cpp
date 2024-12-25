#include <iostream>
using namespace std;
int main(){
    char c;
    bool b=false;
    string input;
    while(cin.get(c)){
        if(c=='"'){
            if(!b)
                input+="``";
            else
                input+="''";
            b = !b;
        }
        else
            input += c;
    }
    cout<<input;
    return 0;
}
