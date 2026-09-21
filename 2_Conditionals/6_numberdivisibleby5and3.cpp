


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
//&& operator !!!!
//take +ve integer input and tell if its divisible by 5 and 3

    //we can also do it by (n%15==0)
//     if(n%5==0 && n%3==0){
//         cout<<n<<" is divisible by 5 and 3"<<endl;
//     }
//     else{
//         cout<<n<<" isn't divisible by 5 and 3"<<endl;
//     }


// or '||' operator
    //take +ve integer input and tell if its divisible by 5 or 3


    // its called logical OR '||' operator (Union)
    if(n%5==0 || n%3==0){
        cout<<n<<" is divisible by 5 or 3"<<endl;
    }
    else{
        cout<<n<<" isn't divisible by 5 or 3"<<endl;
    }

}