/* 10190 - Divide, But Not Quite Conquer! https://zerojudge.tw/ShowProblem?problemid=e566 */
#include <iostream>
#include <vector>
using namespace std;

int main(){
    long int m,n;
    while(cin>>m>>n){
        if(n==0){
            cout<<"Boring!"<<endl;
            continue;
        }
        if(n==1){
            cout<<m<<" "<<n<<endl;
            continue;
        }
        vector<long int> vec;
        bool bored=false;
        vec.push_back(m);
        while(m!=1){
            if(m%n==0){
                m /= n;
                vec.push_back(m);
            }
            else
                break;
        }
        if(m==1){
            for(int i=0;i<vec.size();i++){
                cout<<vec[i]<<" ";
            }
            cout<<endl;
        }
        else
            cout << "Boring!" << endl;
    }
    return 0;
}