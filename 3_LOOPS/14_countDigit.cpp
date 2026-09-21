#include<iostream>
using namespace std;
int main(){
    //wap to count digits of a given number

    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int count = 0;
    while(n!=0){
        n = n/10;
        count++;
    }
    cout<<"The number of digits are : "<<count;     
}