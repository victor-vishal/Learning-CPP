#include<iostream>
using namespace std;
int main(){
    string str = "Vishal";
    //strings has a variable size i.e we can add more chars in it
    //append("string") is used for entering multiple strings after string
    //push_back('char') is used for entering a single char
    //pop_back('char') is used for deleting a single char from the last
    //clear() is used for making a string empty

    str.append(" Pandey");
    cout<<str<<endl;

    str.pop_back();
    cout<<str<<endl;

    str.push_back('y');
    cout<<str<<endl;

    string s="HI";
    cout<<s<<endl;

    s.clear();
    cout<<s<<endl;//prints nothing
    cout<<s.length()<<endl;
}