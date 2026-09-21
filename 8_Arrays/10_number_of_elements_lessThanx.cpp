#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int count=0;

    int arr[5]= {1,2,3,4,5};

    for(int i=0; i<5; i++){
        if(arr[i]<n){
            count++;
        }
    }

    cout<<"Number of elements less than "<<n<<" : "<<count;

}