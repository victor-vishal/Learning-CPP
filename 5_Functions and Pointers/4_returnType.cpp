#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

//when return type is void we can just call it 
//but when return type isn't void(here int) we can store the value it returns and we also have to signify what value it returns


int main(){
    int a, b;
    cin>>a;
    cin>>b;
    cout<<sum(a, b);

    
}