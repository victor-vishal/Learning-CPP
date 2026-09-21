#include<iostream>
using namespace std;
int main(){
    int n, a, d;
    cout<<"Enter how many terms in ap : ";
    cin>>n;
    cout<<"Enter the first term in ap : ";
    cin>>a;
    cout<<"Enter the common difference in ap : ";
    cin>>d;

    for (int i = 1; i<=n; i++){
        cout<<a+(i-1)*d<<endl ;
        //instead of i<=n we can write its last term but we will have to make d and a constants then
    }
}