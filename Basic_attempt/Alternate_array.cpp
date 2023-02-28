class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long A[], int N) 
    { 
    	
    	// Your code here
    	int max_idx = N - 1, min_idx = 0;
         int max_elem = A[N - 1] + 1;
    for (int i = 0; i < N; i++) {
        
        if (i % 2 == 0) {
            A[i] += (A[max_idx] % max_elem) * max_elem;
            max_idx--;
        }
        else {
            A[i] += (A[min_idx] % max_elem) * max_elem;
            min_idx++;
        }
    }
    for (int i = 0; i < N; i++)
        A[i] = A[i] / max_elem;
    	 
    }
};
