#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    //unordered_map doesnt allow duplicate keys, 
    unordered_map<string, int> m1;
    m1["TV"] = 100;
    m1.insert({"Fridge ", 50});
    m1.emplace("Car", 500);
    for(auto p : m1){
        cout<<p.first<<"  "<<p.second<<endl;
    }
    //The elements are printed unsorted

    /*
        Unordere d_map is implemented using hash table and thus has O(1) time complexity for insertion, deletion and search operations on average.
        Whilw Map is implemented using self balancing binary search tree (red-black tree) and thus has O(log n) time complexity for insertion, deletion and search operations.
    */
    return 0;
}