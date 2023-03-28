class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      map<int,int>m;
      int z=0;
      vector<int>v;
      vector<int>v1;
       for(int i=0;i<nums.size();i++) 
         m[nums[i]]++;
      for(auto i:m){
        v1.push_back(i.second);
        
      }
      sort(v1.begin(),v1.end());
        int t=0;
      while(k){
        int j=v1[v1.size()-k];
       for(auto i:m)
       {
            
              if(j==i.second)
              {
               v.push_back(i.first);
      
               k--;
               
              }
              
          
        }
      }

       return v;
    }
};
