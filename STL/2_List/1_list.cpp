#include<iostream>
#include<list>
using namespace std;

void printList(list<int> l){
    for(int i: l){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    //list is imlemented as doubly linked list in STL. 
    //elements can be added or removed from both front and back of the list.
    //IT DOESN'T SUPPORT RANDOM ACCESS LIKE VECTOR, SUPPORTS ONLY SEQUENTIAL ACCESS.

    //syntax: list<data_type> list_name;

    list<int> l1;
    l1 = {1, 2, 3, 4, 5};
    cout<<"Initialized list: ";
    printList(l1);
    l1.push_back(10);
    l1.push_back(20);
    cout<<"Printing list after adding 10 and 20 at back: ";
    printList(l1);
    cout<<"Printing list\n";
    for(int i : l1){
        cout<<i<<" ";
    }
    cout<<endl;

    l1.push_front(5);
    cout<<"Printing list after adding 5 at front\n";
    printList(l1);
    l1.emplace_back(30);
    cout<<"Printing list after adding 30 at back using emplace_back\n";
    printList(l1);

    l1.pop_back();
    cout<<"Printing list after removing last element\n";
    printList(l1);

    //list functions include: push_back(), push_front(), pop_back(), pop_front(), emplace_back(), emplace_front
    //and also vectors functions like size(), empty(), front(), back(), clear() etc.
    
}