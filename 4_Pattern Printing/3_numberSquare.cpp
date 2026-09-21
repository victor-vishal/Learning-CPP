#include<iostream>
using namespace std;
int main(){
    //WAP TO print a square number pattern
    int n, c;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>c;
    
    for(int i = 1; i<=c; i++){
        for(int j=1; j<=n; j++){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
}