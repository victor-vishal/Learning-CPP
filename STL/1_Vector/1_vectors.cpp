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
    vec.emplace_back(6); //emplace_back is similar to push_back but it constructs the element in place, which can be more efficient.
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
    // pop_back() function is used to remove the last element from the vector.
    vec.pop_back();
    cout<<"\n\nElements in vector after pop_back: ";
    for(int i:vec){
        cout<<i<<" ";
    }
    

    //vectors elements can be accessed using the index operator [] or the at() function.
    cout<<"\nElement at index 2: "<<vec[2]<<endl;
    cout<<"Element at index 2: "<<vec.at(2)<<endl;


    //front and back functions to access the first and last elements of the vector.
    cout<<"First element of vector: "<<vec.front()<<endl;
    cout<<"Last element of vector: "<<vec.back()<<endl;


    //initializing a vector with values.
    vector<int> vec2 = {1,2,3,4,5};
    cout<<"\nElements in vector2: ";
    for(int i:vec2){
        cout<<i<<" ";
    }
    
    //we can also initialize a vector with a specific size and default value.
    vector<int>vec3(5,10); //(size, default_value) or (size) default value is 0.
    cout<<"\nElements in vector3: ";
    for(int i:vec3){
        cout<<i<<" ";
    }
    
    vector<int> vec4(vec2); //initializing a vector with another vector/copies vector.
    cout<<"\nElements in vector4: ";
    for(int i:vec4){
        cout<<i<<" ";
    }

    return 0;
}