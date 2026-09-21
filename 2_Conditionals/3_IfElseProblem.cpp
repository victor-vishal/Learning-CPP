// Q : If cost and selling price of an item is input from user. WAP to determine wether the seller has incurred profit, loss or no profit and loss. Also Determine how much profit or loss he incurred.

#include<iostream>
using namespace std;
int main(){
    int cp, sp;
    cout<<"Enter Cost Price : "<<endl;
    cin>>cp;
    cout<<"Enter Selling Price : "<<endl;
    cin>>sp;

    int net = sp-cp;
    if(net>0){
        cout<<"Seller has made profit by "<<net;
    }
    else if(net<0){
        cout<<"Seller has made loss by "<<-net;
    }

    else{ //else keyword doesn't take any condition (else{net==0} is wrong)
       cout<<"Seller has not made any profit or loss"<<endl;
    }
}