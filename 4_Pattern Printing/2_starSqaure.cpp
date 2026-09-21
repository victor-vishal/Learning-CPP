#include<iostream>
using namespace std;
int main(){

// to PRINT A square  there will be only 1 variable let's say n;
    int n;
    cout<<"Enter the side of square : ";
    cin>>n;
    
    for(int i = 1 ; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    }