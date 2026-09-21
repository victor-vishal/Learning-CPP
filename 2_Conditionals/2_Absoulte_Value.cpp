//a program to print ABSOLUTE VALUE of integr (70 prints 70 but -71 prints 71)

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any integer : ";
    cin>>n;
    // if(n<0){
    //     cout<<-n<<endl;
    // }
    // else{
    //     cout<<n;
    // }

    //if we want to change the value of n into its absolute value!!
    if(n<0){
        n = -n;
    }
    cout<<n;


}