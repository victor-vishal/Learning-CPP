#include<iostream>
#include<queue>
using namespace std;

int main(){
    //priority_queue is a container adaptor that provides constant time lookup of the largest (by default) element, at the expense of logarithmic insertion and extraction.
    //it is implemented as a max heap by default and can be implemented as a min heap
    //it can be imagined as a stack, where the top element has the highest priority and is popped first
    // be default, the priority_queue is a max heap, i.e, largest element has the highest priority 

    //Synatx: priority_queue<data_type> pq_name; //max heap
    //Synatx: priority_queue<data_type, vector<data_type>, greater<data_type>>

    priority_queue<int> pq1;//max heap
    // priority_queue<int, vector<int>, less<int>> pq1; // expands to this
    pq1.push(1);
    pq1.push(5);
    pq1.push(2);
    pq1.push(4);

    while(!pq1.empty()){//prints elements in decreasing order
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;

    //for min heap,
    priority_queue<int, vector<int>, greater<int>> pq2;//min heap
    // greater<int> is a functor (function object), is used as a comparitor, it creates a min heap, where smallest element has the highest priority
    pq2.push(1);
    pq2.push(5);
    pq2.push(2);
    pq2.push(4);

    while(!pq2.empty()){//prints elements in increasing order
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
    cout<<endl;

    //the difference in syntax for declaration of Priority queue for max heap and min heap
    // is because the default implementation of priority_queue is a max heap
    // thus we only pass one argument
    
    // priority_queue<data_type> pq_name;
    // Automatically expands to: priority_queue<int, vector<int>, less<int>> pq;


}