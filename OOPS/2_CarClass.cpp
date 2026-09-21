#include<iostream>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;
        float price;
};

void print(Car c){
    cout<<"Car Details of "<<c.brand<<":"<<endl;
    cout<<"Brand: "<<c.brand<<" Model: "<<c.model<<" Year: "<<c.year<<" Price: $"<<c.price<<endl;
}

int main(){
    Car c1;
    c1.brand = "Toyota";
    c1.model = "Yaris";
    c1.year = 2020;
    c1.price = 20000.50;

    Car c2;
    c2.brand = "Honda";
    c2.model = "Civic";
    c2.year = 2019;
    c2.price = 22000.75;

    // cout<<"Car 1 Details:"<<endl;
    // cout<<"Brand: "<<c1.brand<<" Model: "<<c1.model<<" Year: "<<c1.year<<" Price: $"<<c1.price<<endl;
    // cout<<"Car 2 Details:"<<endl;
    // cout<<"Brand: "<<c2.brand<<" Model: "<<c2.model<<" Year: "<<c2.year<<" Price: $"<<c2.price<<endl;

    // we can use a function to display car details

    print(c1);
    print(c2);
}