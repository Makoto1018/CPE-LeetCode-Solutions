#include <iostream>
using namespace std;

int dir_trans(char dir);
char dir_int_trans(int dir_int);
int main(){
    int max_x=0, max_y=0, x=0, y=0;
    char dir;
    string c;
    cin >> max_x >> max_y;
    bool map[max_x+1][max_y+1][4] = {false};
    while(cin>>x>>y>>dir>>c){
        int dir_int=dir_trans(dir);
        bool is_lost = false;
        for(int i=0;i<c.length();i++){
            if(c[i]=='R')
                dir_int = (dir_int + 1) % 4;
            else if(c[i]=='L')
                dir_int = (dir_int - 1 + 4) % 4;
            else{
                if(dir_int==0 && map[x][y][dir_int] == false){
                    if(y+1>max_y){
                        cout << x <<" "<< y <<" "<< dir_int_trans(dir_int) << " LOST" << endl;
                        if(x==0)
                            map[x][y][3] = true;
                        else if(x==max_x)
                            map[x][y][1] = true;
                        map[x][y][dir_int] = true;
                        is_lost = true;
                        break;
                    }
                    else
                        y = y + 1;
                }
                else if(dir_int==1 && map[x][y][dir_int] == false){
                    if(x+1>max_x){
                        cout << x <<" "<< y <<" "<< dir_int_trans(dir_int) << " LOST" << endl;
                        if(y==0)
                            map[x][y][2] = true;
                        else if(y==max_y)
                            map[x][y][0] = true;
                        map[x][y][dir_int] = true;
                        is_lost = true;
                        break;
                    }
                    else
                        x = x + 1 ;
                }
                else if(dir_int==2 && map[x][y][dir_int] == false){
                    if(y-1<0){
                        cout << x <<" "<< y <<" "<< dir_int_trans(dir_int) << " LOST" << endl;
                        if(x==0)
                            map[x][y][3] = true;
                        else if(x==max_x)
                            map[x][y][1] = true;
                        map[x][y][dir_int] = true;
                        is_lost = true;
                        break;
                    }
                    else
                        y = y - 1;
                }
                else if(dir_int==3 && map[x][y][dir_int] == false){
                    if(x-1<0){
                        cout << x <<" "<< y <<" "<< dir_int_trans(dir_int) << " LOST" << endl;
                        if(y==0)
                            map[x][y][2] = true;
                        else if(y==max_y)
                            map[x][y][0] = true;
                        map[x][y][dir_int] = true;
                        map[x][y][dir_int] = true;
                        is_lost = true;
                        break;
                    }
                    else
                        x = x - 1;
                }
            }
        }
        if(!is_lost)
            cout << x <<" "<< y <<" "<< dir_int_trans(dir_int) << endl;
    }
    return 0;
}

int dir_trans(char dir){
    if(dir=='N')
        return 0;
    else if(dir=='E')
        return 1;
    else if(dir=='S')
        return 2;
    else
        return 3;
}

char dir_int_trans(int dir_int){
    if(dir_int==0)
        return 'N';
    else if(dir_int==1)
        return 'E';
    else if(dir_int==2)
        return 'S';
    else
        return 'W';
}
