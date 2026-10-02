#include<iostream>
#include<deque>
using namespace std;



void printDeque(deque<int> d){
    for (int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    //deque = double ended queue [its not dequeue (operation to remove an element from queue)]
    //implemented as dynamic array in STL.
    //supports random access
    //elements can be added or removed from both front and back of the deque.

    //syntax: deque<data_type> deque_name;
    deque<int> d1;
    d1 = {1, 2, 3, 4, 5};
    cout<<"Initialized deque: ";
    printDeque(d1);

    //random access
    cout<<d1[3]<<endl;
}