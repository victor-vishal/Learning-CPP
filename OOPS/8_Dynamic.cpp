#include<iostream>
using namespace std;

class Crickter{
public:
    string name;
    int runs;
    float avg;

    Crickter(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};

int main(){
    int x =4;
    int* p = &x;
    cout<<*p<<endl;
    // this is static memory allocation

    int* ptr = new int(5); // dynamic memory allocation
    //here the integer 5 is stored in heap memory and doesnt have a name associated with it
    cout<<*ptr<<endl;

    Crickter c1("Sachin", 20000, 55.5);
    cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;

    Crickter *c2 = new Crickter("RohitSharma", 22000, 58);
    // cout<<(*c2).name<<" "<<(*c2).runs<<" "<<(*c2).avg<<endl;
    cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<endl; // arrow operator better way to access members of class using pointer
}