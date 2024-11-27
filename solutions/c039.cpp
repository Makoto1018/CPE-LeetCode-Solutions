#include <iostream>
using namespace std;
int algo(int n);
int main(){
    int i=0, j=0;
    while (cin >> i >> j){
        int result = 0;
        bool change = false;
        if(j < i){
            change = true;
            int tmp = j;
            j = i;
            i = tmp;
        }
        for(int tmp = i;tmp<=j;tmp++){
            if (algo(tmp) > result)
                result = algo(tmp);
        }
        if (change){
            int tmp = j;
            j = i;
            i = tmp;
        }
        cout << i <<" "<< j <<" "<< result << endl;
    }
    return 0;
}

int algo(int n){
    int res = 0;
    while(1){
        res++;
        if(n==1)
            return res;
        if(n%2==1)
            n = 3*n + 1;
        else
            n = n/2;
    }
}