class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            // Your code goes here
            int k=0;
            vector<int>x;
            for(int i=0;i<n;i++){
            if(arr[i]<0)
            arr[k++]=arr[i];
            else
            x.push_back(arr[i]);
            }
            int d=0;
            for(int i=k;i<n;i++)
            arr[i]=x[d++];
        }
};
