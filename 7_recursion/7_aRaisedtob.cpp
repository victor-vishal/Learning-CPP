#include<iostream>
using namespace std;

int pwr(int a, int b){
    // if (b==1) return a; //not necessary
    if (b==0) return 1;
    return a*pwr(a, b-1);
}
// a^b= a*a^b-1
//thus a^b=pwr(a,b)=a*pwr(a,b-1)
int main(){
    int a;
    cout<<"Enter base:";
    cin>>a;
    int b;
    cout<<"Enter power:";
    cin>>b;
    cout<<pwr(a, b);
}