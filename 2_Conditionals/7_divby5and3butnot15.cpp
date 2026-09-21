#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if((n%5==0 or n%3==0) and (n%15!=0)){
        cout<<"The give number is divisible by 5 or 3 but not by 15"<<endl;
    }
    else{
        cout<<"Doesn't satisfy this condition"<<endl;
    }
}