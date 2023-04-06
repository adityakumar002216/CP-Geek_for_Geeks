class Solution {
  public:
    int equalSum(int N, vector<int> &A) {
        // code here
        int y=0,sum=0,t=2;
         if(N==1)
        return 1;
        for(int i=0;i<N;i++)
        y+=A[i];
        for(int i=0;i<N-1;i++){
            sum+=A[i];
           int  x=sum;
         if(sum+A[1+i]==y-x)
            return t+i;
            
        }
       
        return -1;
    }
};
