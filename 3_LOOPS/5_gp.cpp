#include<iostream>
using namespace std;
int main(){
    int a, n, r;
    
    cout<<"Enter First term :";
    cin>>a;

    cout<<"Enter common ratio :";
    cin>>r;

    cout<<"Enter number of terms :";
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a= a*r;  
    }
    
}