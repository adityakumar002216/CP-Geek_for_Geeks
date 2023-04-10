class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>v;
        int x=a[n-1];
        v.push_back(a[n-1]);
        for(int i=n-2;i>=0;i--){
            if(x<=a[i]){
                v.push_back(a[i]);
              x=a[i];  
            }
        }
        reverse(v.begin(),v.end());    
        
        return v;
    }
};
