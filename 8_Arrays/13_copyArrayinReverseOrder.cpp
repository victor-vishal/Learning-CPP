#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int b[5];

    for(int i=4; i>=0; i--){
        int j = 5-1-i;
        b[i]=a[j];
    }
    
    cout<<"First array: "<<endl;
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Second array: "<<endl;
    for(int j=0; j<5; j++){
        cout<<b[j]<<" ";
    }
}