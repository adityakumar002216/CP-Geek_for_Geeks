class Solution {
  public:
    int totalTime(int n, vector<int> &arr, vector<int> &time) {
        // code here
        int sum=0;
        // cout<<arr[1];
        unordered_set<int>s;
        s.insert(arr[0]);
        
        for(int i=1;i<arr.size();i++)
        {
            if(s.count(arr[i]))
            {
                
            sum+=time[arr[i]-1];
            
                // cout<<" "<<sum;
            }
            else
            {
            sum+=1;
            s.insert(arr[i]);
                
            }
            
        }
        return sum;
    }
};
