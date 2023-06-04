class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            string k;
            string ans;
            for(int i=0;i<s.length();i++){
               if(isdigit(s[i]))
               k.push_back(s[i]);
               else{
            ans=s[i]+k+ans;
            
            k.clear();
               }
            }
            if(k!="")
            ans=k+ans;
            return ans;
            
        }
};
