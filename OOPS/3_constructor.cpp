#include<iostream>
using namespace std;

// Constructor: A special member function that is automatically called when an object of the class is created.
// It is used to initialize objects.

class Student{
    public:
        string name;
        int rno;
        float gpa;

        // Constructor
        Student (string s, int r, float g){
            name = s;
            rno = r;
            gpa = g;
        }

        void print(Student x){
            cout<<name<<" "<<rno<<" "<<gpa<<"\n";
        }
};

int main(){
    Student s1("Tom", 28, 6.8);
    s1.print(s1);



}