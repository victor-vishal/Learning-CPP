#include<iostream>
using namespace std;
int main(){
    //WAP to sum the digits of a number
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum = 0, r;
    while(n!=0){
        r = n%10;
        n = n/10;
        sum = sum + r;
    }
    if(sum>0) {
        cout<<"The sum of the digits of the given number is : "<<sum;
    }
    
    else{
        cout<<"The sum of the digits of the given number is : "<<-(sum);
    }
    
}