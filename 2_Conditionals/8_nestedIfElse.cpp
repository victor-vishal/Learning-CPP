#include<iostream>
using namespace std;
int main(){
    //Take 3 positive integers input and print  the greatest of them without using multiple conditions

    int a, b, c;

    cout<<"Enter first number : ";
    cin>>a;

    cout<<"Enter second number : ";
    cin>>b;

    cout<<"Enter third number : ";
    cin>>c;
    //a>b -> a>c or a<c
    //b>a -> b>c or c>b
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest"<<endl;
        }

        else{
            cout<<c<<" is greatest"<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<" is greatest"<<endl;
        }
        else{
            cout<<c<<" is greatest"<<endl;
        }
    }

}