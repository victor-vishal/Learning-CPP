#include<iostream>
using namespace std;
int main(){
    //string indexes start with 0 just like array we can traverse through the index of string and perform operations
    // we can even update a character using its index

    string str = "Vishal";
    cout<<str<<endl;
    // str[0]="B"; "" double qoutes dont work for char
     //updation
    str[0]='B';
    cout<<str<<endl;
}