class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        vector<int>v;
        map<int,int>k;
        for(int i=0;i<n;i++){
            k[arr[i]]++;
            }
        
        for(auto i:k){
            if(i.second>=2)
            v.push_back(i.first);
        }
        
        for(int i=0;i<n;i++){
        if(count(v.begin(),v.end(),arr[i])){
        return i+1;
        
        }
        }
        return -1;
    }
};
