class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here
        for(int i=0;i<n-1;i+=2){
            if(arr[i]!=arr[i+1])
            return arr[i];
        }
        return arr[n-1];
    }
};
