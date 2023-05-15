class Solution {
  public:
    long long countBits(long long N) {
        // code here
        long long y=0;
        for(long long  i=0;i<=N;i++)
         y+= __builtin_popcount(i);
         return y;
    }
};
