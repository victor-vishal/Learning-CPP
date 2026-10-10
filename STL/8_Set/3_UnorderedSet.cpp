#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){

    // Unordered Set is an associative container that stores unique elements in unsorted order.
    // It is defined in the <unordered_set> header file.
    // Syntax: unordered_set<data_type> unordered_set_name;
    unordered_set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(20); // duplicate element, will not be inserted
    // Unordered set is implemented using hash table 
    // it thus has O(1) time complexity
    // unlike set, that uses Red-Black tree and has O(log n) time complexity for insertion, deletion and search operations.

    cout<<"Elements in unordered set: ";
    for(int it : s1){
        cout<<it<<" ";
    }
    cout<<endl;
    
    // Unsorted set does not support lower_bound() and upper_bound() functions as it is not a sorted container.

    return 0;
}