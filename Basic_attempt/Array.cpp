//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
        int l,u,t=0;
        for(int i=0;i<S.length();i++){
            l=0,u=0;
        for(int j=i;j<S.length();j++){
            if(islower(S[j]))
            l++;
            else
            u++;
            if(l==u)
            t++;
        }
        }
        
        return t;
    }
};
