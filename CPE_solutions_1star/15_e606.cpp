/* A mid-summer nights dream https://zerojudge.tw/ShowProblem?problemid=e606 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        vector<int> vec;
        int mid = n/2;
        vec.resize(n);
        for(int i=0;i<n;i++){
            cin >> vec[i]; 
        }
        sort(vec.begin(),vec.end());
        if(n%2==0){
            cout<<vec[mid-1]<<" ";
            int ctr=0;
            for(int j=0;j<vec.size();j++){
                if(vec[mid]==vec[j]||vec[mid-1]==vec[j])
                    ctr++;
            }
            cout<<ctr<<" "<<vec[mid]-vec[mid-1]+1<<endl;
        }
        else{
            cout<<vec[mid]<<" ";
            int ctr=0;
            for(int j=0;j<vec.size();j++){
                if(vec[mid]==vec[j])
                    ctr++;
            }
            cout << ctr <<" 1\n";
        }
    }
    return 0;
}