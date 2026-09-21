int i=0;
    int j=a.length()/2-1;
    while(i<j){
        int temp;
        temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<a<<endl;