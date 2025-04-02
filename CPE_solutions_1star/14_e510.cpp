/* What is the Probability? https://zerojudge.tw/ShowProblem?problemid=e510 */
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int s;
    cin >> s;
    for(int c=0;c<s;c++){
        int n;
        cin >> n;
        double p, base;
        cin >> p;
        base = 1-p;
        int i;
        cin >> i;
        double res=0;
        int tmp=0;
        while(true){
            int exp = i - 1 + n * tmp;
            double current_p = pow(base,exp) * p;
            if(current_p<1e-9)
                break;
            res = res + current_p;
            tmp = tmp + 1;
            //cout<<res;
        }
        //cout<<tmp;
        printf("%.4lf\n", res);
    }
    return 0;
}