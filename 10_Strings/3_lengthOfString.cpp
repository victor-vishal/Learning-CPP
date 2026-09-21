#include<iostream>
using namespace std;
int main(){
    string str = "Vishal";
    // cout<<str.length();
    //the above uses builtin length function and prints 6
    //but when we hover over "Vishal" it shows 7
    //it is because string is actually a character array
    //in the last there is one more space in which null is store

    // '\0' is the null character it doesnt print and has the ASCII value of 0

    char c ='\0'; 
    cout<<c;//doesn't print anything
    cout<<(int)'\0'; //prints 0
}