#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;


    //when two conditions are requred 'and' keyword is used and it means intersection we can also use && i.e the logical and operator
    if(1000>num && 99<num){ 
        cout<<num<<" is a 3 digit number"<<endl;
    }
    else{
        cout<<num<<" is not a 3 digit number"<<endl;
    }
}