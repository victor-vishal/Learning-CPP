// Vectors is data structure that represents a dynamic array.
// It can grow and shrink at runtime. 
// to use it we need to include the header file <vector>.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    //syntax: vector<data_type> vector_name;
    vector<int> vec;

    cout<<"Size of vector: "<<vec.size()<<endl; //0
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout<<"Size of vector: "<<vec.size()<<endl; //3

    // each time the capacity of vector is full, it will double the capacity of vector.
    // size is the number of elements in the vector, capacity is the size of the storage space currently allocated to the vector.
    cout<<"capacity of vector: "<<vec.capacity()<<endl; //4 # there is one empty space in the vector, so it will double the capacity of vector to 4.
    vec.push_back(4); // capacity is full, it will double the next time we add an element to the vector.
    cout<<"capacity of vector: "<<vec.capacity()<<endl; 
    vec.push_back(5);
    cout<<"capacity of vector: "<<vec.capacity()<<endl; //8 

    //prinitg the elements of vector we use for each loop.
    cout<<"Elements in vector: using for each loop: ";
    for(int i:vec){
        cout<<i<<" ";
    }

    cout<<"\nElements in vector: using for loop: ";
    for (int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}