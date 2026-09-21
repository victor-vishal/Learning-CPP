//give an array of integers change the value of all odd index elements to its second multiple and increment even ones by a value of 10
#include <iostream>
using namespace std;
int main(){
    int arr[5]= {1,2,3,4,5};

    cout<<"Given Array\n";

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<5; i++){
        if(i%2 != 0){
            arr[i] *= 2;
        }

        else{
            arr[i] += 10;
        }
    }

    cout<<"\n \nNew Array : \n";


    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}