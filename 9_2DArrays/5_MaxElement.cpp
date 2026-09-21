#include <iostream>
using namespace std;
int main(){
    int a [2][3]={1,2,3,4,5,6};

    int max=INT16_MIN;
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    cout<<"The max element of this matrix is "<<max;
}