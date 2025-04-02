/* 10409 - Die Game https://zerojudge.tw/ShowProblem?problemid=e516 */
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(n==0)
            break;
        vector<int> vec{1,2,3,5,4,6};//0 top, 1 up, 2 left, 3 down, 4 right, 5 bottom
        for(int i=0;i<n;i++){
            string a;
            cin >> a;
            if(a=="north"){
                int tmp = vec[0];
                vec[0] = vec[3];
                vec[3] = vec[5];
                vec[5] = vec[1];
                vec[1] = tmp;
            }
            else if(a=="east"){
                int tmp = vec[0];
                vec[0] = vec[2];
                vec[2] = vec[5];
                vec[5] = vec[4];
                vec[4] = tmp;
            }
            else if(a=="south"){
                int tmp = vec[0];
                vec[0] = vec[1];
                vec[1] = vec[5];
                vec[5] = vec[3];
                vec[3] = tmp;
            }
            else if(a=="west"){
                int tmp = vec[0];
                vec[0] = vec[4];
                vec[4] = vec[5];
                vec[5] = vec[2];
                vec[2] = tmp;
            }
        }
        cout << vec[0] << endl;
    }
    return 0;
}