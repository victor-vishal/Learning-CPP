    #include<iostream>
    using namespace std;
    int main(){
        int n, m;
        cout<<"Enter n: ";
        cin>>n;
        cout<<"Enter m: ";
        cin>>m;
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                
                if(i == 1 || i == n || j == 1 || j == m){
                cout << "*"; // Print a star
            }
                else{
                    cout<<" ";
                }
                
                
            }
            cout<<endl;
        }


    }