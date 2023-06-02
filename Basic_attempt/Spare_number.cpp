class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        // Your code
        int k=0;
        while(n){
    
            if(n%2!=0){
                k++;
                if(k==2)
                return 0;
            }
            else
            k=0;
            n=n/2;
        }
        return 1;
    }
};
