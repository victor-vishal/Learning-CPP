#include<iostream>
#include<vector>
using namespace std;

void printVec(vector<pair<string, int>>& vec){
    for(pair<string, int>p: vec){
        cout<<p.first<<", "<<p.second<<endl;
    }
    cout<<endl;
}

int main(){

    vector<pair<string, int>>vec;
    vec = {{"abc", 123}, {"def", 345}};

    for(pair<string, int>i: vec){
        cout<<i.first<<", "<<i.second<<"\n";
    }

    vec.push_back({"asdas", 89});//assumes that the pair is created, then copies it into the vector
    cout<<"\n Printing vector after push_back:  ";
    printVec(vec);

    vec.emplace_back("asdasd", 90);//creates in place object
    cout<<"\n Printing vector after emplace_back:  ";
    printVec(vec);

    //the difference between push_back and emplace_back is that push_back creates a temporary object and then copies it into the vector, while emplace_back constructs the object in place, which can be more efficient.
    //also we didnt have to use {} in emplace_back, we can directly pass the arguments to the constructor of the pair.
    
    return 0;
}