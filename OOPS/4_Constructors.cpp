#include<iostream>
using namespace std;

// Constructor: A special member function that is automatically called when an object of the class is created.
// It is used to initialize objects.

class Student{
    public:
        string name;
        int rno;
        float gpa;
        int age;

        // Constructor
        Student (string s, int r, float g){
            name = s;
            rno = r;
            gpa = g;
        }

        // Default Constructor
        Student(){

        }

        //we can create multiple constructors
        Student(string s, int r, float g, int a){ //parameterized constructor with 4 parameters
            name = s;
            rno = r;
            gpa = g;
            age = a;
        }

};

int main(){
    Student s1("Tom", 28, 6.8);
    s1.age = 20; // we can still set age separately
    s1.rno = 27; // we can overwrite rno if needed
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa;

    //if i want to create an object and not initialize it right away
    //Student s2;  This will give an error because there is no default constructor defined

    Student s2;
    s2.name = "Jerry";
    s2.rno = 34;
    s2.gpa = 7.5;
    cout<<"\n"<<s2.name<<" "<<s2.rno<<" "<<s2.gpa;

    // To fix this error, we need to define a default constructor
    //a default constructor is a constructor that takes no parameters
    //Default constructor is automatically provided by the compiler if no constructors are defined in the class
    //but if we define any constructor then the compiler doesnt provide default constructor

    //so we get an error when we try to declare an object without parameters

    // to fix this we can define our own default constructor

    Student s3("Spike", 45, 8.0, 22); //using the parameterized constructor with 4 parameters
    cout<<"\n"<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<" "<<s3.age;

    Student s4 = s1; //copy constructor
    s4.name = "Tyke"; //changing name to verify that s1 is not affected
    //s1 was not changed, Therefore, a deep copy was made
    cout<<"\n"<<s4.name<<" "<<s4.rno<<" "<<s4.gpa<<" "<<s4.age;
    //if we do not define a copy constructor, the compiler provides a default copy constructor that does a shallow copy

    Student s5(s2); //another way to call copy constructor
    cout<<"\n"<<s5.name<<" "<<s5.rno<<" "<<s5.gpa<<" "<<s5.age;







}