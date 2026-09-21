#include<iostream>
using namespace std;
int main(){
    string str = "Vishal";
    // instead of using append function we can use + plus operator

    str = str + " Pandey";
    cout<<str<<endl;
    //+ can append both in beginning and in the end
    str = "Pandey " + str;
    cout<<str<<endl;    
}