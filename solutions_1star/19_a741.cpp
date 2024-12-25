/* 10101 - Bangla Numbers https://zerojudge.tw/ShowProblem?problemid=a741 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    long long int a;
    int counter=0;
    while(cin>>a){
        counter += 1;
        cout << counter <<". ";
        if(a==0){
            cout << a << endl;
            continue;
        }
        int arr[9];
        arr[0] = a % 100;
        a /= 100;
        arr[1] = a % 10;
        a /= 10;
        arr[2] = a % 100;
        a /= 100;
        arr[3] = a % 100;
        a /= 100;
        arr[4] = a % 100;
        a /= 100;
        arr[5] = a % 10;
        a /= 10;
        arr[6] = a % 100;
        a /= 100;
        arr[7] = a % 100;
        a /= 100;
        arr[8] = a;
        bool printed=false, ended=false;
        if(arr[8]!=0||arr[7]!=0||arr[6]!=0||arr[5]!=0)
            printed = true;
        if(arr[3]==0&&arr[2]==0&&arr[1]==0&&arr[0]==0)
            printed = true;
        if(arr[8]!=0)
            cout << arr[8] << " kuti ";
        if(arr[7]!=0)
            cout << arr[7] << " lakh ";
        if(arr[6]!=0)
            cout << arr[6] << " hajar ";
        if(arr[5]!=0)
            cout << arr[5] << " shata ";
        if(arr[4]!=0)
            cout << arr[4] << " kuti ";
        else if(arr[4]==0 && printed)
            cout << "kuti ";
        else if(arr[4]==0 && ended)
            cout << " kuti" <<endl;
        if(arr[3]!=0)
            cout << arr[3] << " lakh ";
        if(arr[2]!=0)
            cout << arr[2] << " hajar ";
        if(arr[1]!=0)
            cout << arr[1] << " shata ";
        if(arr[0]!=0)
            cout << arr[0] << endl;
        else
            cout << endl;
    }
    return 0;
}