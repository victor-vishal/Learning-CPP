#include<iostream>
using namespace std;
int main(){
    //WAP to print product of digits
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    int prdct = 1, r;
    while(n!=0){
        r = n%10;
        prdct = prdct*r;
        n = n/10;
    }

    cout<<"The product of digits : "<<prdct;

}