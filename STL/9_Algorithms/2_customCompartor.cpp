#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// bool comparator(pair<int, int> p1, pair<int, int> p2){
//     if (p1.second < p2.second) return true;
//     else if(p1.second == p2.second){
//         if(p1.first < p2.first) return true;
//         else return false;
//     }
//     else return false;
// }

bool comparator(pair<int, int> p1, pair<int, int> p2){
    if (p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;//returning false changes position
    
    // we dont need else if ladder since we are using return statement in every condition
    // in case of tie sort using first element of pair
    if (p1.first<p2.first) return true;
    else return false;
}

int main(){
    vector<pair<int,int>> vp = {{5, 2}, {8, 1}, {3, 4}};
    cout<<"Original vector of pairs: \n";
    for (auto p: vp){
        cout<<p.first<<", "<<p.second<<endl;
    }

    //Creating a custom comparator function to sort the vector of pairs on the basis of second element
    sort(vp.begin(), vp.end(), comparator);// we dont use () after the function name because we are passing the function as an argument to sort() function.
    //as for greater<int>() it was not a function but a class function or blueprint
    cout<<"Post Sorting on the basis of second element: \n";
    for(pair<int,int> p : vp){
        cout<<p.first<<", "<<p.second<<endl;
    }

    return 0;
}