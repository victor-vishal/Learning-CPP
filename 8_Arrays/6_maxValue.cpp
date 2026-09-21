#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    
    // int n = sizeof(arr)/4; the size of an int is implementation-defined and could be different (e.g., 2 or 8 bytes) on other architectures. If the size of int is not 4 bytes, n will be calculated incorrectly, leading to a potential crash or incorrect output.
    int n=sizeof(arr)/sizeof(arr[0]); //better way to calculate the number of elements of array 
    int max = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;
}