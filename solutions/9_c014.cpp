#include <iostream>
#include <string>
using namespace std;

int main(){
    int a=1,b=1;
    while(true){
        cin >> a >> b;
        if(a==0 && b==0)
            break;
        int a_arr[10]={0};
        int b_arr[10]={0};
        int i=0;
        //可以不用換成array
        while(a>0){
            a_arr[i] = a % 10;
            a = a / 10;
            i = i + 1;
        }
        i=0;
        while(b>0){
            b_arr[i] = b % 10;
            b = b / 10;
            i = i + 1;
        }
        int counter=0;
        bool carry=false;
        for(i=0;i<10;i++){
            if(carry){
                if(a_arr[i]+b_arr[i]+1>=10){
                    counter = counter + 1;
                    carry=true;
                }
                else
                    carry=false;
            }
            else{
                if(a_arr[i]+b_arr[i]>=10){
                    counter = counter + 1;
                    carry=true;
                }
                else
                    carry=false;
            }
        }
        if(counter==0)
            cout <<"No carry operation.\n";
        else if(counter==1)
            cout <<"1 carry operation.\n";
        else
            cout << counter << " carry operations.\n";
    }
    return 0;
}