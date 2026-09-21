#include<iostream>
using namespace std;
int main(){
    // int arr[5]={1,2,3,4,5};
    // int sum=0;
    // for(int i=0; i<=4; i++){
    //     sum += arr[i];
    // }

    // cout<<"Sum: "<<sum;

    int n;
    cout<<"Enter size of array:";
    cin>>n;

    //we can also find the number of elements by
    // n= sizeof(arr)/4;  one element takes for bytes... so total size in bytes / 4 gives number of elements

    int arr[n];

    cout<<"Enter "<<n<<" number of elements : ";
 
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0; i<=4; i++){
        sum += arr[i];
    }

    cout<<"Sum of elements of array is : "<<sum;



}