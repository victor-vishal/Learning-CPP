// given a point (x,y), WAP to find out if it lies in the 1st quadrant, 2nd quadrant, 3rd quadrant, 4th quadrant, on the x-axis, y-axis or at the origin, viz(0,0).

#include<iostream>
using namespace std;
int main(){
    int x, y;

    cout<<"Enter the value of x : ";
    cin>>x; 
    cout<<"Enter the value of y : ";
    cin>>y;

    if(x>0 && y>0){
        cout<<"Quadrant is First";
    }
    else if(x<0 && y>0){
        cout<<"Quadrant is Second";
    }
    else if(x<0 && y<0){
        cout<<"Quadrant is Third";
    }
    else if(x>0 && y<0){
        cout<<"Quadrant is Fourth";
    }
    else if(x==0 && y!=0){
        cout<<"point lies on y axis";
    }

    else if (y==0 && x!=0){
        cout<<"point lies on x axis";
    }

    else{
        cout<<"Point lies on origin";
    }
    
}