/* 10221 - Satellites https://vjudge.net/problem/UVA-10221 */
#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
#include <iomanip>
#define PI  acos(0) * 2
using namespace std;

int main(){
    double r=6440,s,deg;
    string unit;
    while(cin>>s>>deg>>unit){
        if(unit=="min")
            deg /= 60;
        if(deg>180)
            deg = 360 - deg;
        double arc, chord;
        deg = (deg / 180) * PI;
        //cout << deg;
        arc = deg * (r + s);
        chord = sqrt(2*(r+s)*(r+s)-2*(r+s)*(r+s)*cos(deg));
        cout <<fixed<<setprecision(6)<< arc<<" "<<chord<<endl;
    }
    return 0;
}
