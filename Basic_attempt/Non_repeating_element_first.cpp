class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        vector<int>v;
        map<int,int>m;
        for(int i=0;i<n;i++)
        m[arr[i]]++;
        
     
    for(auto i:m){
        if(i.second==1)
        v.push_back(i.first);
     }
     for(int i=0;i<n;i++){
         if(count(v.begin(),v.end(),arr[i]))
         return arr[i];
     }
    }
  
};
