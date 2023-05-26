class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        // code here
        int k=0,t=0;
        while(N){
            if(N%2!=0){
            k++;
            if(t<k){
            t=k;
            }
            }
            else
            k=0;
            N=N/2;
        }
        return t;
    }
};
