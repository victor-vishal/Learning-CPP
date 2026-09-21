#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int rev = 0, r;
    while(n!=0){
        r = n%10;
        rev = rev*10;
        rev = rev + r;
        n = n/10;
        }

    cout<<rev;
}