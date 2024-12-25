#include <iostream>
#include <string>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int n=0,b1=0,b2=0;
        cin >> n;
        int x1 = n;
        // 10 to 2
        while(x1>0){
            b1 = b1 + x1 % 2;
            x1 = x1 / 2;
        }
        int x2 = n;
        int arr[10] = {0,1,1,2,1,2,2,3,1,2};
        // 0000 0001 0010 0011 0100 0101 0110 0111 1000 1001 1010
        // 16 to 2
        while(x2>0){
            b2 = b2 + arr[x2%10];
            x2 = x2 / 10;
        }
        cout << b1 << " " << b2 << endl;
    }
    return 0;
}