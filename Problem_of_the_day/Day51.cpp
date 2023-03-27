class Solution {
  public:
   int dp[101][101][101];
   int fun(int n,int k,int i)
   {
       if(n!=0 and k==0)return 0;
       if(k==0 and n==0)return 1;
       int ans=0;
       if(dp[n][k][i]!=-1)
       {
           return dp[n][k][i];
       }
       if(i<=n)
       {
           ans=fun(n-i,k-1,i)+fun(n,k,i+1);
       }
       return dp[n][k][i]=ans;
   }
    int countWaystoDivide(int n, int k) {
       
        memset(dp,-1,sizeof(dp));
        return fun(n,k,1);
        
    }
};
