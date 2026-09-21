//If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of three

#include<iostream>
using namespace std;
int main(){
    int ram, shyam, ajay;
    cout<<"Enter age of Ram: ";
    cin>>ram;
    cout<<"Enter age of Shyam: ";
    cin>>shyam;
    cout<<"Enter age of Ajay: ";
    cin>>ajay;

    if(ram<shyam && ram<ajay){
        cout<<"Ram is the youngest";
    }

    else if(shyam<ram && shyam<ajay){
        cout<<"Shyam is the youngest";
    }

    else{
        cout<<"Ajay is the youngest";
    }
}