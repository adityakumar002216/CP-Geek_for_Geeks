class Solution {
  public:
    long long int squaresDiff(int n){
        // code here
        long long int  y=(n*(n+1)*(2*n+1))/6;
        
        long long int x=(n*(n+1))/2;
        
        return abs(y-(x*x));
        
    }
};
