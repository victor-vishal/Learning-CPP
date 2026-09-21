#include<iostream>
using namespace std;
int main(){
    int a [2][3]={7,8,9,10,11,12};
    
    cout<<"Orginal Matrix:\n";
    for(int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;

    int b [3][2];
    for(int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            b[j][i]=a[i][j];
        }
    }
    cout<<"Transposed Matrix:\n";

    for(int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            cout<<b[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;
}

//Tobefixed