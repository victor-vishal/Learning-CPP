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

    return 0;
}