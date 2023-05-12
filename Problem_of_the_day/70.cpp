class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
        int k=0,t=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]!=0 && arr[i]==0)
            k++;
            if(arr[i]==0)
            t=1;
        }
        if(k>0 && arr[arr.size()-1]==0)
        return k;
        if(k>0)
        return k+1;
        if(t==1)
        return 0;
        return -1;
    }
};
