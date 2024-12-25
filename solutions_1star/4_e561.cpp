#include <iostream>
using namespace std;

int main(){
    int n=0, l=0;
    int array[50];
    cin >> n;
    for(int i=0;i<n;i++){
        int counter=0;
        cin >> l;
        for(int j=0;j<l;j++){
            cin >> array[j];
        }
        for(int j=0;j<l;j++){
            for(int k=0;k<l-1;k++){
                if(array[k]>array[k+1]){
                    int tmp=array[k];
                    array[k]=array[k+1];
                    array[k+1]=tmp;
                    counter = counter + 1;
                }
            }
        }
        cout << "Optimal train swapping takes " << counter <<" swaps.\n";
    }
    return 0;
}