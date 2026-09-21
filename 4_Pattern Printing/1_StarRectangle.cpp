#include<iostream>
using namespace std;
int main(){
    // int m;
    // cout<<"Enter number of rows ";
    // cin>>m;
    // for(int i = 1; i<=m; i++){
    //     cout<<"****"<<endl;
    // }
    // Pattern printed here uses only one variable and that is number of rows

    // to print a pattern with variable number of rows as well as columns

    int m, n; //M=rows, n=columns
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number or columns : ";
    cin>>n;
    for(int i = 1; i<=m; i++){

        for(int j=1; j<=n; j++){    //in nested loop we can use i (in both the outer and inner loop) but it is a standard to use j in the inner loop
            cout<<"* ";
        }

        cout<<endl;


}
 
