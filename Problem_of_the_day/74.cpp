class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
        // code here
        long long sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        
        for(int k=N;k>=1;k--)
        if(sum%k==0)
        return k;
        
    }
};
