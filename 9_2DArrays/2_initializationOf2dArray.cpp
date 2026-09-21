#include<iostream>
using namespace std;
int main(){
    //Array can be initialized in the following ways: 
    
    // 2D array is also called array of array
    //int this method we store values by treating each column as a unique array thus elements of a column are in {}
    // a[m][n]: n= number of elements in {}; n=number of {} in {}
    int a [3][2] = {{1,2}, {3,4}, {5,6}} ;

    // we can also directly store elements like 1 d array it is understood as first n[column size] elements would make first column and so on 
    int b [3][2] = {1,2,3,4,5,6} ;

    //if declaration and initialization is happening together then it is also not mandatory to specify number of rows [m] but specifying number of columns [n] is 
    int c [][2] = {1,2,3,4,5,6} ;

    cout<<"Array a: \n";
    for (int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout<< a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"\nArray b: \n";
    for (int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout<< a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nArray c: \n";
    for (int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout<< a[i][j]<<" ";
        }
        cout<<endl;
    }
}