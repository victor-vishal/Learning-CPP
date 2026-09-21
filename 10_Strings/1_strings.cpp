#include<iostream>
using namespace std;
int main(){
    string str = "Enter your name: ";
    cout<<str;
    string name;
    // cin>>name;
    getline(cin,name);
    cout<<"Hi ! "<<name;

    //for taking input in string we use getline instead of cin operator it is to ensure that everything including the blankspace is entered in string
    //the problem of cin operator is that it only takes the first word as input
    // as when given space bar it treats the rest as different data[used when entering multiple value (we press SPACE or ENTER)]
}