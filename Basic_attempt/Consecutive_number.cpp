class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int k=1,ans=0;
      sort(nums.begin(),nums.end());
      if(nums.size()==0)
      return 0;
        for(int i=1;i<nums.size();i++){
          if(nums[i-1]+1==nums[i] )
          k++;
          else if( nums[i-1]==nums[i])
          continue;
          
          else{
            if(ans<k)
            ans=k;
            k=1;
          }
        }
        if(k>ans)
        ans=k;

            return ans;
    }
};
