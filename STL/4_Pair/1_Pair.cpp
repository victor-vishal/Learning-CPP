#include<iostream>
using namespace std;
#include<vector>

int main()
{
    // Pair is a container that holds two values of different data types.
    // It is defined in the <utility> header file.
    // Synatx: pair<data_type1, data_type2> pair_name;

    pair<string, int>p1;
    p1 = {"viktor", 20};
    cout<<p1.first<<" "<<p1.second<<endl;

    //we can also make pair of pairs
    pair<string, pair<int, string>>p2 ;
    p2 = {"Alice", {20, "Engineer"}};
    cout<<p2.first<<" "<<endl;
    //pair of pairs can be accessed using the first and second members of the pair.
    cout<<p2.second.first<<" "<<p2.second.second<<endl;

    //pair of pairs can also be initialized using the make_pair() function.
    pair<string, pair<int, string>>p3;
    p3 = make_pair("Bob", make_pair(25, "Doctor"));

    //we can also make vector of pairs
    // synatx: vector<pair<data_type1, data_type2>> vector_name;

    vector<pair<string, int>>v1;
    v1 = {{"Alice", 20}, {"Bob", 25}, {"Charlie", 30}};
    cout<<"Vector of pairs: "<<endl;
    for(pair<string, int> p : v1){ // or use auto p : v1
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    return 0;
}