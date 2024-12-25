/* 10189 - Minesweeper https://zerojudge.tw/ShowProblem?problemid=e605 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int row, col, ctr=0;
    cin>>row>>col;
    while(true){
        if(row==col && row==0)
            break;
        ctr += 1;
        cin.ignore();
        cout << "Field #" << ctr << ":" << endl;
        vector<vector<char>> vec(row, vector<char>(col));
        for(int i=0;i<row;i++){
            string s;
            getline(cin,s);
            for(int j=0;j<col;j++){
                vec[i][j] = s[j];
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                //cout << i*row + j<<endl;
                int counter=0;
                if(vec[i][j]=='.'){
                    //cout << "dot here";
                    if(i-1>=0 && j-1>=0){
                        if(vec[i-1][j-1]=='*')
                            counter += 1;
                    }
                    if(i-1>=0){
                        if(vec[i-1][j]=='*')
                            counter += 1;
                    }
                    if(i-1>=0 && j+1<col){
                        if(vec[i-1][j+1]=='*')
                            counter += 1;
                    }
                    if(j-1>=0){
                        if(vec[i][j-1]=='*')
                            counter += 1;
                    }
                    if(j+1<col){
                        if(vec[i][j+1]=='*')
                            counter += 1;
                    }
                    if(i+1<row && j-1>=0){
                        if(vec[i+1][j-1]=='*')
                            counter += 1;
                    }
                    if(i+1<row){
                        if(vec[i+1][j]=='*')
                            counter += 1;
                    }
                    if(i+1<row && j+1<col){
                        if(vec[i+1][j+1]=='*')
                            counter += 1;
                    }
                    //cout<<counter;
                    vec[i][j] = counter + '0';
                }
            }
        }
        cout<<endl;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout << vec[i][j];
            }
            cout << endl;
        }
        cin>>row>>col;
        if(row==col && row==0)
            break;
        else
            cout << endl;
    }
    return 0;
}