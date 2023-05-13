class Solution {
  public:
    int bitMagic(int n, vector<int> &arr) {
        // code here
        int k=0;
        
        for(int i=0,j=arr.size()-1;i<j;j--,i++){
            if(arr[i]!=arr[j])
            {
                
                k++;
            }
        }
        if(k==0)
        return 0;
        else{
            return (k%2==0)?k/2:(k/2)+1;
        }
    }
};
