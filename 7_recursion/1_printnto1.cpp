#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;    //base case
    cout<<n<<endl;      //work
    print(n-1);         //call
    // if we switch call and work(call then work to work then call)
    // When the work is done before the recursive call, the following happens:The function executes the print statement for the current value of $n$.It then makes the recursive call for $n-1$.This means the printing for $n$ happens before the printing for $n-1$, $n-2$, and so on.The output is generated in the order the function calls are made, from the largest $n$ down to the base case.
    // Before [8:24:23] in video
}


int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    print(n);
}