#include<iostream>
using namespace std;

class Car{
    public:
        string name;
        float price; //in lakhs
        int seater;

        Car(string name, float price, int seater){
            this->name=name;
            this->price=price;
            this->seater=seater;
        }

void display(int seater){
    cout<<"Car: "<<name<<", Price in Lakhs: "<<price<<", "<<this->seater<<" seater";
    cout<<endl<<seater<<endl<<endl;
    // here this->seater is used to access the class member seater
    // and seater alone is used to access the function parameter seater

    //if we dont use this-> then it will give priority to the function parameter seater and the class member seater will be hidden
    //but it doesn't update the value of class member variable

    //thus it is advisable to use this-> to avoid confusion and accidentally printing wrong value
}

};

// void display(Car c){
//     cout<<"Car: "<<c.name<<", Price in Lakhs: "<<c.price<<", "<<c.seater<<" seater";
// }

int main(){
    Car c1("Toyota", 20.5, 8);
    Car c2("Honda", 10.8, 5);
    Car c3("Tata", 10, 5);

    c1.display(99);
    c2.display(67);
    c3.display(56);
//this->seater refers to the class member variable
//seater refers to the function parameter
    
}