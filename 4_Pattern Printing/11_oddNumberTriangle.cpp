#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        //for(int j=1; j<=2*j-1; j+=2){cout<<j} can also work
        
        //we can also initialize another variable here int a=1 then put a += 2 at the end of inner loop
        
        for(int j=1; j<=i; j++){ 
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }
}