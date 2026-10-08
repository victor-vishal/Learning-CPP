#include<iostream>
#include<map>
using namespace std;

int main(){

    // Map is a container that stores elements in key-value pairs.
    // It is defined in the <map> header file.
    // Syntax: map<key_data_type, value_data_type> map_name;
    map<string, int> m1;
    m1 = {{"Alice", 20}, {"Bob", 25}, {"Charlie", 30}};
    m1["David"] = 35;
    m1.insert({"Eve", 40});
    m1.emplace("Frank", 45);
    for (auto p: m1){
        cout<<p.first<<" "<<p.second<<endl;//ouput is sorted by key in ascending order by default.
    }
    //map[key] = value; creates a new key value pair or updates the value of an existing key.
    //map is sorted by key in ascending order by default.
    //Implemented using self balancing binary search tree (red-black tree) and thus has O(log n) time complexity for insertion, deletion and search operations.

    cout<<"Age of Alice: "<<m1["Alice"]<<endl; //map[key] returns the value
    cout<<"count of alice:"<<m1.count("Alice")<<endl; //count returns 1 if key is present, 0 otherwise
    //the count() returns how many times a key is present in the map. Since map is a container that stores unique keys, the count() function will return either 0 or 1.

    m1.erase("Alice"); //erase removes the key-value pair from the map

    // find() returns to key-value pair, else returns m1.end() if key is not present
    auto it = m1.find("Bob");
    if (it != m1.end()){
        cout<<"Found Bob: "<<it->first<<" "<<it->second<<endl;
    }
    else{
        cout<<"Bob not found"<<endl;
    }

    //other functions include size(), empty() , clear()
    // erase vs empty vs clear: 
    // erase removes a specific key-value pair, 
    // while clear removes all key-value pairs from the map.
    // empty checks if the map is empty or not.

    return 0;
}