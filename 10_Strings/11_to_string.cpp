#include<iostream>
using namespace std;
int main(){
    int x=1234;
    string s = to_string(x);
    s+="dddd";
    cout<<s<<endl; 
    // count the number of digits without using loops and dividing by 10
    
    int y=1000; //has 4 digits
    string str = to_string(y);
    cout<<"Number of digits are:"<<str.length();
}