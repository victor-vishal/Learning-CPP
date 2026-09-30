#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    //creating an iterator
    vector<int>::iterator itr;
    cout<<"Printing Vector\n";
    for(itr = vec.begin(); itr != vec.end(); itr++){
        cout<<*(itr)<<" ";
    }

    cout<<"\nPrinting vector in reverse order\n";
    //declaration of iterator in loop initialization
    //functions like rbegin() and rend() works on reverse iterator and not standard iterator
    //v.rend() doesn't return the first element of the vector but returns an iterator to the position before the first element, which similar to v.end() returning an iterator after the last element of the vector.
    for(vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); it++){
        cout<<*(it)<<" ";
    }

    // instead of declaring the iterator using vector<int>>::iterator or reverse_iterator, 
    //we can use auto keyword to let the compiler decide the type of iterator.
    //auto keyword allows the compiler to automatically deduce the type of variable using its initializer value.

    //creating another iterterator
    auto itr1 = vec.begin();
    cout<<"\nPrinting vector using auto keyword\n";
    for(itr1 = vec.begin(); itr1 != vec.end(); itr1++){
        cout<<*(itr1)<<" ";
    }

    cout<<"\nPrinting vector using range based for loop using auto keyword\n";
    //for(data_type variale : container) here container can be any STL container like vector, list, set, map etc.
    for(auto itr2 : vec){
        cout<<itr2<<" ";
    }


    return 0;
}