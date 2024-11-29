#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n=0, counter=0;
    cin>>n;
    vector<int> fib;
    fib.push_back(1); // 第1
    fib.push_back(2); // 第2
    while(fib.back()<100000000){
        int tmp = fib[fib.size()-1] + fib[fib.size()-2];
        if(tmp>100000000)
            break;
        fib.push_back(tmp);
    }
    while(counter<n){
        int num=0;
        int count=0;
        bool arr[fib.size()] = {false};
        bool can_use = true, recorded=false;
        int biggest;
        cin >> num;
        cout << num << " = ";
        for(int i=fib.size();num!=0;i--){
            if(num >= fib[i-1] && can_use){
                num = num - fib[i-1];
                arr[i-1] = true;
                can_use = false;
                if(!recorded){
                    biggest = i;
                    recorded = true;
                }
            }
            else{
                can_use = true;
            }
        }
        // 10 = 10010 (fib)
        for(int i=biggest;i>=1;i--){
            if(arr[i-1] == true)
                cout<<"1";
            else
                cout<<"0";
        }
        cout << " (fib)\n";
        counter = counter + 1;
    }
    return 0;
}