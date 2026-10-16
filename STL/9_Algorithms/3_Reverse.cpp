#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {5, 2, 8, 1, 3};
    //reverse function
    //reverse(start_iterator, end_iterator) the end_iterator is exclusive

    reverse(v.begin(), v.end());
    cout<<"Reversed vector: ";
    for(int i: v){
        cout<<i<<" ";
    }

    
    cout<<"\n";
    vector<int> v2 ={5, 12, 34, 6, 1};
    reverse(v2.begin()+1, v2.begin()+3); //reverse element within a range of 1, 2 (since 3 is exclusive)
    cout<<"\n\nReversed vector: ";
    for(int i: v2){
        cout<<i<<" ";
    }

    return 0;
}