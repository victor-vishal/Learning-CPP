//WAP TO PRINT 1 to 20 except 3 and 8

#include<iostream>
using namespace std;
int main(){
    // for(int i=1; i<=20; i++){
    //     if(i!=3 && i!=8){cout<<i<<" ";}
    // }
    //this prints number 1 to 20 except 3 and 8
    // we can also do this using continue statement
    
    for(int i=1; i<=20; i++){
        if(i==3) {continue;}

        if(i==8) {continue;}
        
        {cout<<i<<" ";}
    }
    //continue is a loop control statement and is used for skipping the current iteration (round) and continue to the next iteration.

}