class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int sum1=0,sum2=0;
        if(n==1)
        return 1;
        
        for(int i=0;i<n;i++){
        sum1+=a[i];
        
        }
        for(int i=0;i<n;i++){
        sum2+=a[i];
        if(sum1-sum2==sum2+a[i+1])
        return i+2;
        }
        return -1;
        
    }

};
