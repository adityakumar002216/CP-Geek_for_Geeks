class Solution
{

public:
    int xmod11(string x)
    {
       // code here
       
       int ans = 0;
       for(int i=0;i<x.length();i++){
           ans = (ans*10 + (x[i]-'0'))%11;
       }
       return ans;
     
    }
};
