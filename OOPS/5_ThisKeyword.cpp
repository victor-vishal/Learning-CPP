#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
   /* Cricketer(string name, int runs){
        name = name;
        runs = runs;
    }*/
    //when the parameter names are same as the class member names, we get garbage values 
    //because the local parameters shadow the class members
    //thus the object members remain uninitialized printing garbage values
    //to resolve this we use 'this' keyword
    Cricketer(string name, int runs){
        this->name = name;
        this->runs = runs;
    }
};
int main(){
    Cricketer c1("ViralKohli", 25000);
    cout<<c1.name<<" "<<c1.runs;

}