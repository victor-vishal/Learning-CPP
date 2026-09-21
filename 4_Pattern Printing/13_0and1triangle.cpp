/*WAP to print the following pattern
1
01
101
0101
10101
*/

// in this pattern we can notice when i+j=even then 1 is there

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2!=0){
                cout<<0<<" ";
            }
            else{
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }
}