#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // if(n%2==0) cout<<n<<" is an even number."<<endl;
    // else cout<<n<<" is an odd number."<<endl;

    //////////////or

    if(n%2==0){
        cout<<"Even NUmber"<<endl;
    }
    else{
        cout<<"Odd number";
        cout<<"Wow";
    }

    // if we dont use {} then wow wouldn't be considerd in else
}

