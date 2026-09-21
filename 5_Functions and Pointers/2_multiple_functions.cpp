#include <iostream>
using namespace std;

void usa(){
    cout<<"You are in USA..."<<endl;
    cout<<"How are you??"<<endl;
}

void japan(){
    cout<<"You are in Japan..."<<endl;
    cout<<"Genkidesu ka??"<<endl;
    usa(); //we can call other function inside a function so when we call this function then during execution the usa function is called as well  
}

int main(){//this is main function and is mandatory
    japan();
}

        /*IMPORTANT NOTE :-
        THE FUNCTION TO BE CALLED MUST BE WRITTEN BEFORE OTHERWISE COMPILER WILL GIVE UNDEFINED/DECLARTION ERROR
        
        FOR EXAMPLE: IF WE WRITE main() BEFORE japan()
        THEN COMPILER WILL GIVE ERROR BECAUSE IT DOESN'T KNOW ABOUT japan() FUNCTION AS IT IS WRITTEN AFTER main()
        
        it can be avoided by function prototype*/

