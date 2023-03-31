class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            int prev = 0;
            
            for(int i=1;i<n;i++)
            {
                if((a[i] + a[i-1]) % 2 == 0) continue;
                
                else{
                    sort(a.begin()+prev,a.begin()+i, greater<int>());
                    prev = i;
                }
            }
            sort(a.begin()+prev,a.end(),greater<int>());            
            return a;
        }
};
