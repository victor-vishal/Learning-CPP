#include<iostream>
using namespace std;
int main(){
  int x =3, y, z;
  y = x = 10;
  z = x < 10;
  cout<<x<<" "<<y<<" "<<z;
  // the order of arithmetic operations is left to right but the order of assignment is right to left.
  // so x = 10 is executed first and then y = x is executed.
  // so y = 10 and x = 10.
  // z = x < 10 is executed next. since x = 10, x < 10 is false. so z = 0.
  // so x = 10, y = 10, z = 0.
  //x<10 is false, and false is stored in z as 0.
  //the heirarchy of operator < is higher than =.
}