#include<iostream>
using namespace std;

class Student{ // it is convention to start class name with capital letter
public: //access specifier
    string name;
    int rno;
    float cgpa;
};

int main() {
    //class is a user-defined data type its a blueprint for creating objects
    // class can store data members and member functions
    //data members are the variables that hold the data (varuables inside the class)
    //member functions are the functions that operate on the data members(functions inside the class)

    Student s1; //object creation/ declaration of object
    // to initialize the data members of the class we use the dot operator(.)
    s1.name = "Vishal"; //s1 is the object name
    s1.rno = 65;
    s1.cgpa = 9.1;

    // class is like array of different data types

    Student s2;
    s2.name = "Shubam";
    s2.rno = 23;
    s2.cgpa = 8.5;

    cout<<"Name: "<<s1.name<<" "<<"Roll No: "<<s1.rno<<" "<<"CGPA: "<<s1.cgpa<<endl;
    cout<<"Name: "<<s2.name<<" "<<"Roll No: "<<s2.rno<<" "<<"CGPA: "<<s2.cgpa<<endl;
}