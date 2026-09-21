#include<iostream>
using namespace std;
int main(){
    // int arr[5]; //declaration of array 'arr' of size 5
    
    // arr[0]=0; //set/ initialization/updation of array elemens
    // arr[1]=2;
    // arr[2]=4;
    // arr[3]=6;
    // arr[4]=8;

    //here the number in [] is called index
    //index=size-1; 0 index means first elements position
    //arr or a or num is generally used for naming

    //to print array
    // cout<<arr[4]<<endl;

    //taking input using loop

    int arr[5];
    cout<<"Enter 5 elements of array : ";
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }

    //print using loop
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }

    //double print
    cout<<endl<<"Double of this array is : ";
    for(int i=0; i<=4; i++){
        cout<<arr[i]*2<<" ";
    }

}