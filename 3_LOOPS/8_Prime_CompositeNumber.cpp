#include<iostream>
using namespace std;
int main(){
    //The numbers that has factors aside from 1 and itself are composite numbers
    //therefore if we found any factor between 2 to n/2 then its composite

    int n;
    cout<<"Enter n : ";
    cin>>n;
    bool flag = true; // assuming number is prime
    for(int i=2; i<=n/2; i++ ){
        if(n%i==0){
            cout<<i<<" Factor found, i.e "<<i<<" a composite number."<<endl;
            flag = false; // updates variable to false meaning not prime(composite)
            break;
        }
        }
    if(n==1){cout<<"Neither Prime nor Composite.";}
    else if(flag == true)// if the value of flag hasn't updated it means the previous condtion wasn't satisfied that means number is prime
    {cout<<n<<" is a prime number.";}
}