#include<iostream>
using namespace std;

void change(int x[]){
    x[0] = 10;
} 

int main(){
    int arr[] = {1,2,3,4,5};
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    change(arr); //unlike others arrays are pass by reference and not pass by values thus when a function is called to update its value, instead of creating another array(like in variable case/pass by value) it accesses and updates the array created in main function

    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



}