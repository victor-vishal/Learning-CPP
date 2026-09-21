//WAP to store 10 at every index of a 5by5 matrix
#include<iostream>
using namespace std;
int main(){
    int arr [5][5];

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            arr[i][j]=10;
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}