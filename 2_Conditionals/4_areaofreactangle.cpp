//Given the length and breadth of a rectangle, WAP to find whether the area of the rectangle is greater then its perimeter.

#include<iostream>
using namespace std;
int main(){
    int l, b, area, perimeter;

    cout<<"Enter Length of Rectangle : ";
    cin>>l;
    cout<<endl;
    cout<<"Enter Breadth of Rectangle : ";
    cin>>b;
    cout<<endl;

    area = l*b;
    perimeter = 2*(l+b);
    cout<<"Area : "<<area<<endl<<"Perimeter : "<<perimeter<<endl;


    if(area>perimeter){
        cout<<"Area is greater"<<endl;
    }
    
    else{
        cout<<"Perimeter is greater"<<endl;
    }
}