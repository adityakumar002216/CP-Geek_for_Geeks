class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        
        long long int sum=0;
        if(K==1)
        return GeekNum[0];
        
        for(int i=0;i<K;i++)
        {
           sum+=GeekNum[i];
           
        }
        GeekNum.push_back(sum);
        
        int j=K,i=0;
        
        while(j<N){
            
            sum-=GeekNum[i];
            sum+=GeekNum[j];
            GeekNum.push_back(sum);
            i++;
            j++;
        }
        
           
        return GeekNum[N-1];
    }
};
