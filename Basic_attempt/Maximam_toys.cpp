class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        // code here
        int sum=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum>K)
            return i;
        }
        return arr.size();
    }
};
