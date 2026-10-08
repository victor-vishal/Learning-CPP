#include<iostream>
#include<map>
using namespace std;

int main(){

    // we cant access the elements in multimap using [] operator as it is not a unique key container.
    // we can use insert() or emplace() to add elements to multimap.

    // Syntax: multimap<key_data_type, value_data_type> multimap_name;

    multimap<string, int> m1;
    m1.insert({"Alice", 20});//multimap allows duplicate keys, so we can insert multiple values for the same key.
    m1.insert({"Alice", 25});
    m1.emplace("Alice", 30);

    for(auto p: m1){
        cout<<p.first<<" "<<p.second<<endl;
    }

    m1.erase("Alice"); //erase removes all the key-value pairs with the given key from the multimap.

    cout<<"After erasing Alice:"<<endl;
    for(auto p: m1){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<m1.empty()<<endl; //returns 1, i.e, empty map


    return 0;
}