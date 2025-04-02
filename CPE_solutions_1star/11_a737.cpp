#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// *到所有點距離最短 --> 取中位數
int main(){
    int n=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int r=0;
        cin >> r;
        vector<int> vec;
        vec.resize(r);
        for(int j=0;j<r;j++){
            cin >> vec[j];
        }
        sort(vec.begin(),vec.end());
        int mid=0;
        if(r%2==0)
            mid = (vec[r/2-1] + vec[r/2]) / 2;
        else
            mid = vec[r/2];
        int result=0;
        for(int j=0;j<vec.size();j++){
            result = result + abs(mid - vec[j]);
        }
        cout << result << endl;
    }
    return 0;
}