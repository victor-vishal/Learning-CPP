#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter upto how many alphabets : ";
    cin>>n;

    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++){
        cout<<char(j+64)<<" ";}
        
        //j+64 as A starts with 65 and adding 64 to it then typecasting it into char data type

    cout<<endl;
    }
}