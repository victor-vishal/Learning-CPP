#include <iostream>
using namespace std;

void usa(){
    cout<<"You are in USA..."<<endl;
    cout<<"How are you??"<<endl;
}

void japan(){
    cout<<"You are in Japan..."<<endl;
    cout<<"Genkidesu ka??"<<endl;
}

    //the main fuctions can be called only once
    //when program runs the main function is executed first
    //DATA type before any function are called return type
    //to end a function we use "return" keyword just like break in loop
    //anything written after return won't be executed

int main(){//this is main function and is mandatory
    usa(); //function call
    japan();
}