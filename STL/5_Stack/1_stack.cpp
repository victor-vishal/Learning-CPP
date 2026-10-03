#include<iostream>
#include<stack>
using namespace std;

int main(){
    // Stack is a LIFO data structure
    //syntax: stack<data_type> stack_name;

    
    /*
    stack functions:
    1. push() - adds an element to the top of the stack
    2. pop() - removes the top element from the stack
    3. top() - returns the top element of the stack
    4. empty() - returns true if the stack is empty, false otherwise
    5. size() - returns the number of elements in the stack
    6. emplace() - constructs an element in-place at the top of the stack
    7. swap() - swaps the contents of two stacks
    */

    stack<int> s1;
    s1.push(0); // we use push or emplace to add elements to the stack
    s1.push(3);
    s1.push(5);

    while(!s1.empty()){
        cout<<s1.top()<<" "; // we use top to access the top element of the stack
        s1.pop(); // we use pop to remove the top element of the stack
    }
    // we insert 0,3,5 and when we pop, we get 5,3,0 because stack is a LIFO data structure

    s1.push(1);
    s1.push(2);
    cout<<"Size of stack s1: "<<s1.size()<<endl; // we use size to get the number of elements in the stack
    
    stack<int> s2;
    cout<<"Size of stack s2: "<<s2.size()<<endl;

    s1.swap(s2); // we use swap to swap the contents of two stacks
    cout<<"Size of stack s1 after swap: "<<s1.size()<<endl<<"Size of stack s2 after swap: "<<s2.size()<<endl;

    return 0;
}