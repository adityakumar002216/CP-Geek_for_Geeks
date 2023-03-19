//using map
class Solution {
  public:
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
        map<int,int>mp;
        vector<int>ans(A.size());
        
        for(int i=0;i<A.size();i++){
            ans[i]=mp.size();
            mp[A[i]]++;
        }
        mp.clear();
        for(int i=A.size()-1;i>=0;i--){
            ans[i]-=mp.size();
            mp[A[i]]++;
        }
        return ans;
    }
};



//using set

class Solution {
  public:
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
        vector<int> ans(N);
        set<int> st;
        for(int i=0;i<N;i++)
        {
            ans[i]=st.size();
            st.insert(A[i]);
        }
        st.clear();
        for(int i=N-1;i>=0;i--)
        {
            ans[i]-=st.size();
            st.insert(A[i]);
        }
        
        return ans;
    }
};
