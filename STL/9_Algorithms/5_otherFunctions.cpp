#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int arr[] = {5, 2, 8, 1, 3};

    cout<<"Original array: ";
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;

    max(1,3); //returns 3
    cout<<"Max of 1 and 3 is: "<<max(1,3)<<endl;

    min(1,3); //returns 1
    cout<<"Min of 1 and 3 is: "<<min(1,3)<<endl;

    //for vectors
    swap(arr[0], arr[1]); //swaps the values of arr[0] and arr[1]
    cout<<"Array after swapping arr[0] and arr[1]: ";
    for(int i : arr){
        cout<<i<<" ";
    }

    //binary_search function
    sort(arr, arr+5); //binary_search() function works only on sorted arrays or vectors
    //Syntax: binary_search(start_iterator, end_iterator, value_to_search)
    cout<<"\nIs 3 present in the array? "<<binary_search(arr, arr+5, 3); //returns 1 (true) since 3 is present in the array

    vector<int> v = {5, 2, 8, 1, 3};
    //max_element function returns an iterator to the maximum element in the range [first, last)
    cout<<"Max Element: "<<*(max_element(v.begin(), v.end()))<<endl; 

    //min_element works similary
    cout<<"Min Element: "<<*(min_element(v.begin(), v.end()))<<endl;

    //other functions
    //count set bits
    //__builtin_popcount() function counts the number of set bits in an integer
    //__builtin_popcountl() function counts the number of set bits in a long integer
    //__builtin_popcountll() function counts the number of set bits in a long long integer

    int n = 5; //binary representation of 5 is 101, so it has 2 set bits
    cout<<__builtin_popcount(n)<<endl; 

    long int n2 = 15; //binary representation of 15 is 1111, so it has 4 set bits
    cout<<__builtin_popcountl(n2)<<endl; 

    long long int n3 = 5;
    cout<<__builtin_popcountll(n3)<<endl; 
}