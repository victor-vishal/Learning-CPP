#include<iostream>
using namespace std;
//using function
int fact(int x){
        int f =1;
        for(int i=1; i<=x; i++){
            f *=i;
        }
        return f;
    }

int main(){
    /*combination formula= n!/(r!*(n-r)!)*/

    int n;
    cout<<"Enter n: ";
    cin>>n;
    int r;
    cout<<"Enter r: ";
    cin>>r;

    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);

    cout<<a/(b*c);
    




    //using loops

    // int n;
    // cout<<"Enter n: ";
    // cin>>n;
    // int r;
    // cout<<"Enter r: ";
    // cin>>r;
    // int a=1; //store n
    // for(int i=1; i<=n; i++){
    //     a *= i;
    // }
    // // cout<<a;

    //  int b=1; //store r
    // for(int i=1; i<=r; i++){
    //     b *= i;
    // }

    // int c=1; //store n-r
    // for(int i=1; i<=n-r; i++){
    //     c *= i;
    // }

    // cout<<a/(b*c);
}