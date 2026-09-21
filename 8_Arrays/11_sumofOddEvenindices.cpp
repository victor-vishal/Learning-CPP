// find the difference between sum of even indices to that of odd indices

#include <iostream>
using namespace std;
int main(){
    int arr[5]= {1,2,3,4,5};
    int even=0;
    int odd=0;

    cout<<"Given Array\n";

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

   for (int i=0; i<5; i++){
    if(i%2==0){
        even += arr[i];
    }

    else{
        odd += arr[i];
    }
    }

    cout<<"\nsum of even indices : "<<even<<endl;
    cout<<"sum of odd indices : "<<odd<<endl;

    cout<<"Sum of even - Sum of odd = "<<even-odd;

}