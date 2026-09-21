#include<iostream>
using namespace std;
// void swap(int x, int y){
//     int temp=x;
//     x=y;
//     y=temp;
// }
// int main(){
//     int x = 3;
//     int y = 2;
//     cout<<"x="<<x<<" "<<"y="<<y<<endl;
//     swap(x,y);
//     cout<<"x="<<x<<" "<<"y="<<y<<endl;}

/*the values are not swapped because the swap functions uses pass by value
the x and y of both main function and swap are different variables when swap function is called the values of x,y and not x,y themseleves are sent to function and then swapping does occur but only on the variables inside swap function and not the main function variables
and when swap function ends the variables are destroyed
*/

// it can be solve by pass by reference
//By adding an ampersand (&) to the parameter type, you make the parameter a reference to the original variable.

void swap(int& x, int& y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int x = 3;
    int y = 2;
    cout<<"x="<<x<<" "<<"y="<<y<<endl;
    swap(x,y);
    cout<<"x="<<x<<" "<<"y="<<y<<endl;}