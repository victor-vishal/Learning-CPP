#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& vec){
    for(int i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec ={1,2,3,4,5,6,7,8,9,10};
    /*Vector Functions in c++
    size() : returns the number of elements in the vector
    capacity(): returns the number of elements that the vector can hold before it needs to reallocate memory
    push_back() : adds an element to the end of the vector
    pop_back() : removes the last element from the vector
    emplace_back() : constructs an element in place at the end of the vector
    
    erase() : removes an element from a specific position in the vector
    insert() : inserts an element at a specific position in the vector
    functions like insert() and erase() are very costly since they perform operations on the middle of the vector and require shifting of elements.

    empty() : returns 1 (true) if the vector is empty, 0 (false) otherwise
    clear() : removes all the elements from the vector
    at() or [] : returns the element at a specific index
    front() : returns the first element of the vector
    back() : returns the last element of the vector
    
    end() : returns an iterator to the end of the vector
    begin() : returns an iterator to the beginning of the vector
    other functions that return iterators are
    cbegin(), cend(): returns a const_iterator to beginning and end respectively
    rbegin(), rend(): returns a reverse_iterator to beginning and end respectively
    crbegin(), crend(): returns a const_reverse_iterator to beginning and end respectively
    c means const and r means reverse. 
    
    end() doesnt point to the last element of the vector, it points to the next position after the last element. 

    THESE ITERATOR FUNCTIONS RETURN ITERATORS THAT POINT TO THE ELEMENT OF THE VECTOR
    SO WE CAN ACCESS THE ELEMENT USING DEREFERENCING OPERATOR * OR ARROW OPERATOR ->



    */

   
   
   cout<<"First element: "<<*vec.begin()<<endl; //returns the first element of the vector
    cout<<"vec.end(): "<<*vec.end()<<endl; //prints garbage value
   cout<<"Last element: "<<*(vec.end()-1)<<endl; //returns the last element of the vector
    // since * has higher precedence than -, we must use parenthesis or it will print the last element and give error because the last element points to an imaginary memory location


    //to print address of an element in vector
    // cout<<vec.begin()<<endl; 
    //returns an 'iterator' class object, NOT a raw pointer.std::cout doesn't have a built-in rule to print iterator objects. 
    // to print address we can use data() function or get the value using dereferencing operator * and then use & to get the address of that value.
    cout<<"Address of first element: "<<&(*vec.begin())<<endl; 
    //Third way it to use []
    cout<<"Address of first element:" <<&vec[0]<<endl;
    return 0;
}