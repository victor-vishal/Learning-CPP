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
    //sort function
    //sort(start_iterator, end_iterator) the end_iterator is exclusive, i.e, it points to the next element after the last element to be sorted.
    //sort(arr, arr + 5); //sorts the array in ascending order we use arr + n where n is the number of elements in the array because the second argument of sort() is exclusive, i.e, it points to the next element after the last element to be sorted.

    sort(arr, arr+5);
    cout<<"Sorted array in ascending order: ";
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;

    //to sort in descending order we can use the greater<int>() function as the third argument of sort() function.
    sort(arr, arr+5, greater<int>());

    cout<<"Sorted array in descending order: ";
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;

    //for vectors
    vector<int> v = {5, 2, 8, 1, 3};
    sort(v.begin(), v.end());//since v.end() already points to n+1 we dont need to add 1 to it like we did for arrays.
    cout<<"Sorted vector in ascending order: ";
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v.begin(), v.end(), greater<int>()); //we pass a comparator as 3rd argument 
    cout<<"Sorted vector in descending order: ";
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;


    //vector of pairs
    vector<pair<int, int>> vp = {{5, 2}, {8, 1}, {3, 4}};
    cout<<"Original vector of pairs: \n";
    for(auto p: vp){
        cout<<p.first<<", "<<p.second<<endl;
    }
    cout<<endl;
    sort(vp.begin(), vp.end()); //sorts the vector of pairs in ascending order

    cout<<"Sorted vector of pairs in ascending order: \n";
    for(auto p: vp){
        cout<<p.first<<", "<<p.second<<" "<<endl;
    }
    cout<<endl;

    //when sorting a vector of pairs, the first element is used for sorting and if the first elements are equal only then the second element is compared for tie braking. This is the default behavior of the sort() function when sorting a vector of pairs.
}