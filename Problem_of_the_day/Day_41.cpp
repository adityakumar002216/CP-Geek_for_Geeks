class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        // code here 
        int maxi=0,start=0,end=0,cnt=0;
        while(end<n){
            if(arr[end]=='O')cnt++;
            while(start<n && cnt>m){
                if(arr[start]=='O')cnt--;
                start++;
            }
            maxi=max(maxi,end-start+1);
            end++;
        }
        return maxi;
    }
};
