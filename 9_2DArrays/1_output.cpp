#include<iostream>
using namespace std;
int main(){
    int m=2,n=3;
    // cout<<"Enter row and column of 2D array: ";
    // cin>>m>>n;

    // cout<<"\nEnter Elements : \n";
    int arr [m][n];
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // cout<<"\nGiven Matrix is\n";
    arr[0][0]=1;
    arr[0][1]=2;
    arr[0][2]=3;
    arr[1][0]=4;
    arr[1][1]=5;
    arr[1][2]=6;


    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //to print transpose simple swap the conditions
    cout<<endl<<"Transpose:"<<endl;

    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}