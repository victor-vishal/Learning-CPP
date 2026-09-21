//take input %age of student and print the grade acc to marks

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the percentage of student : ";
    cin>>n;

    //the way if else ladder works is, when if isn't satisfied then else if is checked if the latter isn't either then the other condition is checked
    //so instead of writing 2 conditions in else if we can only write one
    //in second condtion we can also wrte n>=61 only and notn<=80 because if it is greater than 80 it would satisfy the first condition and the other condtion wont even run

    //        if(n>=81 && n<=100){
    //     cout<<"Very Good";
    // }
    // else if(n>=61 && n<=80){
    //     cout<<"Good";
    // }
    // else if(n>=41 && n<=60){
    //     cout<<"Average";
    // }
    // else{
    //     cout<<"Fail";
    // }



    if(n>=81 && n<=100){
        cout<<"Very Good";
    }
    else if(n>=61){
        cout<<"Good";
    }
    else if(n>=41){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
}



 