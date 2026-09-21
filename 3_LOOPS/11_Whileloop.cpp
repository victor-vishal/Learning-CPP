#include<iostream>
using namespace std;
int main(){
    // in while loop initialization takes place before loop and in while() only condition is written also the increment or decrement takes place after the statement

    int i = 1;
    while(i<=10){
        cout<<i<<" ";
        i++;
    }
}