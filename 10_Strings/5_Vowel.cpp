// WAP To count all the vowels in a string
#include<iostream>
using namespace std;
int main(){
    string a ="cow is an animal with four legs";
    cout<<a<<endl;
    int n = a.length();
    int count = 0;
    //considering there are only smaller case letters for capitals we have to add more conditions
    for(int i=0; i<n; i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            count++;
        }
    }
    cout<<count;
}