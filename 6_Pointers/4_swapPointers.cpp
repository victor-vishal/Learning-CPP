#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x = 3;
    int y = 2;
    cout<<"x="<<x<<" "<<"y="<<y<<endl;
    swap(&x,&y);
    cout<<"x="<<x<<" "<<"y="<<y<<endl;}