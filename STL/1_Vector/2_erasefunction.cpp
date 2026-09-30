#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& vec){ //we can use const before vector<int>& vec to make it a read-only function, 
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    cout<<"Elements in vector: ";
    printVector(vec);

    //ERASE FUNCTION changes the size of vector but not the capacity of vector.
    //erase function is used to remove elements from a vector.
    // syntax: vector_name.erase(iterator_position);
    vec.erase(vec.begin()); //removes the first element of vector.
    cout<<"Elements in vector after erase first element: ";
    printVector(vec);
    vec.erase(vec.begin()+2); //removes the 3rd element of vector.
    cout<<"Elements in vector after erase 3rd element: ";
    printVector(vec);
    //methods like begin() and end() return iterators (these are memory addresses) and when we add an int value to it it moves the iterator to the next position in the vector.
    // for example arr[5] == vec.begin()+5, it will point to the 6th element of vector.

    vector<int> vec2 = {0,1,2,3,4,5,6,7,8,9,10};
    cout<<"\nElements in vector2: ";
    printVector(vec2);
    //to remove a range of elements 
    // syntax: vector_name.erase(iterator_position_start, iterator_position_end); //end is exclusive so only start to end-1 elements will be removed.
    vec2.erase(vec2.begin()+3, vec2.begin()+8);
    cout<<"Elements in vector2 after erase elements from index 3 to 7: ";
    printVector(vec2);

    return 0;
    }