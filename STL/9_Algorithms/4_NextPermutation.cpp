#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    string s = "abc";
    next_permutation(s.begin(), s.end());
    cout<<s<<endl;
    
    next_permutation(s.begin(), s.end());
    cout<<s<<endl;
    
    next_permutation(s.begin(), s.end());
    cout<<s<<endl;
    
    //the next_permutation() function returns false when the last permutation is reached and the string is sorted in ascending order again.
    //The permutaion is done in lexicographically increasing order, i.e, the next permutation is the next greater permutation of the string.
    next_permutation(s.begin(), s.end());
    cout<<s<<endl;
    
    next_permutation(s.begin(), s.end());
    cout<<s<<endl;
    
    cout<<next_permutation(s.begin(), s.end())<<endl;// returns 0 (false) since the last permutation is reached and the string is sorted in ascending order again.
    cout<<s<<endl;
    

    //similarly we can use the prev_permutation() function to get the previous permutation of the string in lexicographically decreasing order.
    prev_permutation(s.begin(), s.end());
    cout<<s<<endl;//cba
    return 0;
}