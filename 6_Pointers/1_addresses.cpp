#include<iostream>
using namespace std;
int main(){
    int x=3;
    cout<<&x;//this prints the address in memory
    //0x61ff0c
    //0x61ff0c
    //0x61ff0c
    // it keeps changing everytime but in my case it is not changing
    // even if 2 variables have same values, their addresses would be different