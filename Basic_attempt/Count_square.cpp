class Solution {
  public:
    int countSquares(int N) {
        // code here
        int x=0;
        for(int i=1;i<sqrt(N);i++){
            x=i;
            if(i*i>N)
            break;
        }
        return x;
    }
};
