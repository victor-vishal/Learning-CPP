#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& vec){
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> vec ={1,2,3,4,5,6,7,8,9,10};
    cout<<"Elements in vector: ";
    printVector(vec);

    //insert function inserts an element at a specific position and slides the other elements to the right.
    //syntax: vector_name.insert(iterator_position, value);
    vec.insert(vec.begin(), 0); //inserts 0 at the beginning of vector.
    cout<<"Elements in vector after inserting 0 at the beginning: ";
    printVector(vec);

    vec.insert(vec.begin()+5, 69);
    cout<<"Elements in vector after inserting 69 at index 5: ";
    printVector(vec);

    vec.erase(vec.begin()+3); //removes the element at index 3.
    cout<<"Elements in vector after removing element at index 3: ";
    printVector(vec);

    cout<<vec.empty()<<endl; //returns 0 if vector is not empty and 1 if vector is empty.
    vec.clear(); //removes all the elements from vector.
    cout<<vec.empty()<<endl; //return 1 since vector is empty after clear() function.

    return 0;
}

//insert and erase functions are very costly since they perform operations on the middle of the vector and require shifting of elements