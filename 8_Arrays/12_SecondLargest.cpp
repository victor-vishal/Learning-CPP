// print second largest element in an array
#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int mx=INT8_MIN;

    for(int i=0; i<5; i++){
        mx= max(mx,a[i]);
    }
    
    cout<<"Largest element: "<<mx<<endl;

    int smax=INT8_MIN;
    for(int i=0; i<5; i++){
        if(a[i]!=mx){
            smax=max(smax,a[i]);
        }
    }

    cout<<"Second Largest element: "<<smax<<endl;
}