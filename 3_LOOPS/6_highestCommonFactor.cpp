#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int f;
    // for(int i =1; i<n; i++){
    //     if(n%i==0){cout<<i<<" "; f = i;}
    // }
    
    // cout<<endl<<"The HCF is : "<<f;

    // to reduce complexit what we can do is to run the loop backwards, this way the biggest factor will come first and then use break statement

    for(int i = n/2; i>1; i--){
        if(n%i==0){
            cout<<endl<<"The HCF is : "<<i;
}
            break;
        }

        // the largest factor of a number is its half so we can also do it just by print n/2
    }