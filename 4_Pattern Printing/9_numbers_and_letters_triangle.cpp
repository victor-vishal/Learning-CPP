#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if (i%2==0){        //when value of i is even this condition would be satisfied and then the typecasted value of j+64 will be printed
                cout<<char(j+64)<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}