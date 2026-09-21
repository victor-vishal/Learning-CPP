#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;
    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};

void change(Cricketer* c){ //receives address of Cricketer object same as Crickter* c = &c1;
    // (*c).avg = 77.2;
    //this can be also done by arrow operator
    c->avg=77.2; // (*c).avg = 77.2;
}

int main(){
    Cricketer c1("Virat Kohli", 25000, 55.2);
    Cricketer c2("Rohit Sharma", 18000, 47.8);

    Cricketer *p1 = &c1;
    cout<<c1.runs<<endl; //prints 25000
    // cout<<(*p1).runs<<endl; //prints 25000 as well
    cout<<p1->runs<<endl; //prints 25000 as well
    (*p1).runs=2000; //updates runs of c1 to 2000
    cout<<c1.runs; //(*p1).runs would have printed 2000 as well

    cout<<c1.avg<<endl; //prints 55.2
    change(&c1); //pass by reference using pointer, sends address of c1 to function
    cout<<c1.avg<<endl; //prints 77.2 as avg is updated in function
    
    //The arrow operator (->) is used to access members of a structure or class through a pointer.
    //it is a shorthand notation for dereferencing a pointer(*c1) and then accessing the member using the dot operator.
    // Example: c1->avg is equivalent to (*c1).avg

    
    /*int x = 4; 
    int* ptr =&x; //stores address of x
    int y = *ptr; // stores value at address stored in ptr

    cout<<x<<endl;    //4
    cout<<&x<<endl;   //address of x
    cout<<ptr<<endl;  //address of x
    cout<<*ptr<<endl; //4

    //we can even update the value of x using pointer
    *ptr = 10; //updates value at address stored in ptr to 10
    cout<<x<<endl; //10
    */
}