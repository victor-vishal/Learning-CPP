#include<iostream>
#include<set>
using namespace std;

int main(){

    // Multiset is an associative container that stores elements in sorted order.
    // It allows duplicate elements,
    // Elements are of same data type
    // uses <set> header file
    // Syntax: multiset<data_type> multiset_name;

    multiset<int> s1;
    // int n,k;
    // cout<<"Enter the number of elements to be inserted in multiset: ";
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     cout<<"Enter value : "<<i+1<<": ";
    //     cin>>k;
    //     s1.insert(k);
    // }

    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(20); //duplicate element, will be inserted

    cout<<"Elements in multiset: ";
    for(int it : s1){
        cout<<it<<" ";
    }
    cout<<endl;

    // to access an element we use functions that return iterators, such as find() function
    cout<<"Finding 20 in multiset: ";
    auto it = s1.find(20);
    if( it != s1.end()){
        cout<<"Found: "<<*it<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}