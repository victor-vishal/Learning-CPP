#include <iostream>
using namespace std;
int main(){
    //using 3rd variable
    int x = 3, y = 2;
    cout<<"x="<<x<<" "<<"y="<<y<<endl;
    // int temp=x;
    // x=y;
    // y=temp;
    // cout<<"x="<<x<<" "<<"y="<<y<<endl;

    //without using 3rd variable;
    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"x="<<x<<" "<<"y="<<y<<endl;

    /* how it works
        x=3, y=2
        x=3+2=5
        y=5-2=3
        x=5-3=2    
    */
}