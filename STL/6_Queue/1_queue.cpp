#include<iostream>
#include<queue>
using namespace std;

int main(){
    // Queue is a FIFO data structure
    //syntax: queue<data_type> queue_name;

    queue<int> q1;
    q1.push(1); // we use push or emplace to add elements to the queue
    q1.push(2);
    q1.push(3);

    /*
    Queue functions:
    1. push() - adds an element to the back of the queue
    2. pop() - removes the front element from the queue
    3. front() - returns the front element of the queue
    4. back() - returns the back element of the queue
    5. empty() - returns true if the queue is empty, false otherwise
    6. size() - returns the number of elements in the queue
    7. emplace() - constructs an element in-place at the back of the queue
    */

    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;

    return 0;
}