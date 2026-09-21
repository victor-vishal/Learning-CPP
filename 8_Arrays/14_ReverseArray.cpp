// WAP to reverse an array without using any extra array

#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    //It is called two pointers approach

    int i=0;
    int j=5-1; //n-1
    while(i<j){
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
        for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
}