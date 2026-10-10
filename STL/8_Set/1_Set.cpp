    #include<iostream>
    #include<set>
    using namespace std;

    int main(){
        //Set is a data structure that stores unique elements in sorted order.
        // Elements are of same data type
        // uses <set> header file
        // Duplicate elements are not allowed in set.
        // Syntax: set<data_type> set_name;

        set<int> s1;
        s1.insert(10);
        s1.insert(20);
        s1.insert(30);
        s1.insert(20); //duplicate element, will not be inserted

        for(auto val: s1){
            cout<<val<<" ";
        }
        cout<<endl;

        //functions of set: insert(), emplace(), erase(), find(), size(), empty(), loer_bound(), upper_bound()
        
        //lower_bound() returns an iterator to the first element that is greater than or equal to the given key
        set<int>::iterator it = s1.lower_bound(20); //returns an iterator to 20
        cout<<"Lower bound of 20: "<<*it<<endl;

        //upper_bound() returns an iterator to the first element that is strictly greater than the given key 
        set<int>::iterator it2 = s1.upper_bound(20);
        cout<<"Upper Bound of 20: "<<*it2<<endl;  


        cout<<"Upper Bound of 10: "<<*(s1.upper_bound(10))<<" "<<endl; //returns an iterator to 20


        cout<<"upper bound of 30: "<<*(s1.upper_bound(30))<<" "<<endl; //Out of bounds error, garbage value will be printed
        // Both lower_bound() and upper_bound() functions are similar, i.e they return an iterator to the first element greater than key
        // The only difference being that lower_bound() has greater than or equal to condition, while upper_bound() has strictly greater than condition.
        return 0;
    }