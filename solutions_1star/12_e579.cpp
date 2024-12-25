#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t=0;
    cin >> t;
    for(int iter=0;iter<t;iter++){
        int days,partys;
        cin >> days >> partys;
        vector<bool> vec(days,true);
        for(int i=0;i<partys;i++){
            int h,tmp=0;
            cin >> h;
            while(1){
                tmp = tmp + h;
                if(tmp>days)
                    break;
                if(tmp%7==6||tmp%7==0)
                    continue;
                else
                    vec[tmp-1] = false;
            }
        }
        int counter=0;
        for(int j=0;j<days;j++){
            if(!vec[j])
                counter = counter + 1;
        }
        cout << counter << endl;
    }
}