string isSubset(int arr1[], int arr2[], int n, int m) {
    
    
   
    
   int i = 0, j = 0;
 
    if (n< m)
        return "No";
 

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
 
    
    while (i < m && j < n) {
    
        if (arr1[j] < arr2[i])
            j++;
        
        else if (arr1[j] == arr2[i]) {
            j++;
            i++;
        }
 
        
        else if (arr1[j] > arr2[i])
            return "No";
    }
 
    return (i < m) ? "No" : "Yes";
    
}
