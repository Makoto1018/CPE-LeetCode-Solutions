/* 10242 - Fourth Point!! https://zerojudge.tw/ShowProblem?problemid=e512 */
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double x=0, y=0;
    double x2=0, y2=0;
    double x3=0, y3=0;
    double x4=0, y4=0;
    while(cin>>x>>y>>x2>>y2>>x3>>y3>>x4>>y4){
        if(x2==x3 && y2==y3){
            double midx = (x+x4)/2;
            double midy = (y+y4)/2;
            double resultx = x2 - 2 * (x2-midx);
            double resulty = y2 - 2 * (y2-midy);
            cout<<fixed<<setprecision(3)<<resultx<<" "<<fixed<<setprecision(3)<<resulty<<endl;
        }
        else if(x2==x4 && y2==y4){
            double midx = (x+x3)/2;
            double midy = (y+y3)/2;
            double resultx = x2 - 2 * (x2-midx);
            double resulty = y2 - 2 * (y2-midy);
            cout<<fixed<<setprecision(3)<<resultx<<" "<<fixed<<setprecision(3)<<resulty<<endl;
        }
        else if(x==x3 && y==y3){
            double midx = (x2+x4)/2;
            double midy = (y2+y4)/2;
            double resultx = x - 2 * (x-midx);
            double resulty = y - 2 * (y-midy);
            cout<<fixed<<setprecision(3)<<resultx<<" "<<fixed<<setprecision(3)<<resulty<<endl;
        }
        else if(x==x4 && y==y4){
            double midx = (x2+x3)/2;
            double midy = (y2+y3)/2;
            double resultx = x - 2 * (x-midx);
            double resulty = y - 2 * (y-midy);
            cout<<fixed<<setprecision(3)<<resultx<<" "<<fixed<<setprecision(3)<<resulty<<endl;
        }
    }
    return 0;
}