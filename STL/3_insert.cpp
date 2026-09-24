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

    return 0;
}