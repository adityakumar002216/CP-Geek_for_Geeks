void selectionSort(int arr[], int n)
    {
       int min,j;
       for(int i=0;i<n-1;i++){
           min=i;
        for(j=i+1;j<n;j++)
            {
            if(arr[j]<arr[min])
             min=j;
           }
          int temp=arr[i];
          arr[i]=arr[min];
          arr[min]=temp;
       }
    }
