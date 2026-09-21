#include<iostream>
using namespace std;
int main(){
    //another to method to declare and initialize array
    // int arr[5] = {1,2,3,4,5};
    //when declaration and initialization are done simulataneously then we can not provie size in[] while declaring array
    int arr[] = {1,2,3,4,5};
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //to reverse print an array run the loop backwards
    for(int i=4; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}