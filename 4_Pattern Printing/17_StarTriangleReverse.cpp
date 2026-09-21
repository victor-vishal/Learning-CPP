#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++){ //space loop
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }

        for(int j=1; j<=i; j++) //star
        // for(int j=1; j<=n; j++) //rhombus
        {//stars loop
            // cout<<"* "; //star triangle
            cout<<j<<" ";  //number triangle
        }
        cout<<endl;
    }
}