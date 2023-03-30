class Solution {
  public:
    int minimumInteger(int n, vector<int> &a) {
        // code here
        long long s = accumulate(a.begin(), a.end(), 0ll);
        int mn = INT_MAX;
        for (auto i : a){
            if (s <= (long long)n*i){
                mn = min(mn,i);
            }
        }
        return mn;
    }
};
