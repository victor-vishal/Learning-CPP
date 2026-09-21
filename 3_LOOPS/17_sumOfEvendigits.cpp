#include<iostream>
using namespace std;
int main(){
    //WAP to sum only the even digits of a number
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum = 0, r;
    while(n!=0){
        r = n%10;
        n = n/10;
        if(r%2==0){
        sum = sum + r;
    }
    }
    if(sum>0) {
        cout<<"The sum of the even digits of the given number is : "<<sum;
    }
    
    else{
        cout<<"The sum of the even digits of the given number is : "<<-(sum);
    }
    
}