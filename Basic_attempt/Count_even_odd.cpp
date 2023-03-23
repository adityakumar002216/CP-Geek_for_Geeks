void countOddEven(int arr[], int sizeof_array)
    {
        
        // your code here
        int l=0,k=0;
        for(int i=0;i<sizeof_array;i++){
            if(arr[i]%2==0)
            l++;
            if(arr[i]%2!=0)
            k++;
        }
        cout<<k<<" "<<l<<"\n";
       
        
    }
};
