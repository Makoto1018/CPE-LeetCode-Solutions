    #include <iostream>
    using namespace std;
    int main(){
        string arr[100];
        int i=0,length=0;
        while(getline(cin,arr[i])){
            if(arr[i].length()>length){
                length = arr[i].length();
            }
            i = i + 1;
        }
        for(int j=0;j<length;j++){
            for(int k=i-1;k>=0;k--){
                if (j < arr[k].length())
                    cout << arr[k][j];
                else
                    cout << ' ';
                }
            cout << endl;
        }
        return 0;
    }