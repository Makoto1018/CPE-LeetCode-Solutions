#include <iostream>
#include <vector>
#include <string>
using namespace std;

// abs() 取絕對值
int main(){
    int n=0;
    while(cin>>n){
        vector<int> vec;
        vector<bool> b_vec;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            vec.push_back(a);
            b_vec.push_back(false);
        }
        bool is_jolly = true;
        for(int i=0;i<vec.size()-1;i++){
            int tmp = abs(vec[i]-vec[i+1]);
            if(tmp>=1 && tmp<=n-1 && b_vec[tmp]==false)
                b_vec[tmp] = true;
            else{
                is_jolly = false;
                break;
            }
        }
        if(is_jolly)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";
    }
    return 0;
}