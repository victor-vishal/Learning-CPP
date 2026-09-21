#include<iostream>
using namespace std;
int main(){
    int x=18;
    int* ptr = &x;
    cout<<x<<endl;
    cout<<ptr<<endl;

    //updating value of variable with pointer
    *ptr=20;
    cout<<x<<endl;
}
