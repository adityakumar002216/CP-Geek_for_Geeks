class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int rev=0;
    	int k=0;
    	for(int i=0;i<n;i++){
    	    int x=a[i];
    	    int z=x;
    	    rev=0;
    	    while(x){
    	       rev=rev*10+x%10;
    	       x=x/10;
    	        
    	    }
    	
    	    if(z==rev)
    	    k++;
    	    else
    	    return 0;
    	    if(k==n)
    	    return 1;
    	    
    	}
    	return 1;
    }
};
