#include<iostream>
using namespace std;
int main(){
    //a pointer is a variable that stores the memory address of another variable. Instead of holding a direct value, it holds a reference to where that value is stored in the computer's memory.
    // Pointers are declared using the asterisk (*) symbol after the data type 
    int x=3;
    int* p; //pointers
    p=&x;
    cout<<p<<endl;
    cout<<&x<<endl;

    //printing value of a variable using its pointer
    cout<<x<<endl;
    cout<<*p<<endl; //*p is a dereference operator it checks the address (value) stored in p and then find the variable with that address to prints its value
    cout<<&p<<endl; // even p has its own address

}