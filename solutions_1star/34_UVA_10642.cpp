/* UVA-10642 Can You Solve It? https://vjudge.net/problem/UVA-10642 */
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int n=0, ctr=1;
    cin >> n;
    while(n--){
        int a=0,b=0,c=0,d=0;
        cin >> a >> b >> c >> d;
        long long int res=0;
        for(int i=1;i<=c+d;i++){
            res += i;
        }
        res += c;
        for(int i=1;i<=a+b;i++){
            res -= i;
        }
        res -= a;
        cout << "Case " << ctr << ": " << res << endl;
        ctr++;
    }

    return 0;
}