// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        
        stack<int> st;
    for (auto it : arr)
    {
        if (st.size() > 0)
        {
            if (st.top() >= 0 && it < 0){
                //  cout<<st.top()<<it<<" ";
                st.pop();
            
               
            }
            else if (st.top() < 0 && it >= 0){
                //  cout<<st.top()<<" ";
                st.pop();
            
               
            }
            else
                st.push(it);
        }
        else
        {
            st.push(it);
            // cout<<it<<" ";
        }
    }
    vector<int> ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }

};
