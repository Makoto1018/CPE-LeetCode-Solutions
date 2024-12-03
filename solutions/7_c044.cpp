#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int n=0;
    string s;
    int arr[26]={0};
    char c_arr[26]={0};
    for(int i=0;i<26;i++){
        c_arr[i] = i+'A';
    }
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,s);
        //cout<<s<<endl;
        for(int j=0;j<s.length();j++){
            if(isalpha(s[j])){
                if(isupper(s[j])){
                    arr[s[j]-'A']++;
                }
                else if(islower(s[j])){
                    arr[s[j]-'a']++;
                }
            } 
            else
                continue;
        }
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<25;j++){
            if(arr[j]<arr[j+1]){
                int tmp;
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                char c_tmp;
                c_tmp = c_arr[j];
                c_arr[j] = c_arr[j+1];
                c_arr[j+1] = c_tmp;
            }
        }
    }
    for(int i=arr[0];i>0;i--){
        int counter=0,pos=0;
        bool recorded = false;
        for(int j=0;j<26;j++){
            if (arr[j]==i){
                counter++;
                if(!recorded){
                    pos = j;
                    recorded = true;
                }
            }
        }
        for(int j=0;j<counter;j++){
            for(int k=pos;k<pos+counter-1;k++){
                if(c_arr[k]-'A' > c_arr[k+1]-'A'){
                    char c_tmp;
                    c_tmp = c_arr[k];
                    c_arr[k] = c_arr[k+1];
                    c_arr[k+1] = c_tmp;
                }
            }
        }
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0)
            continue;
        else
            cout << c_arr[i] << " " << arr[i] << endl;
    }
    
    return 0;
}