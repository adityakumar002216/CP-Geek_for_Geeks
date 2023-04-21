class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        if(x.length()==1)
        return false;
       stack<char>st;
       for(int i=0;i<x.length();i++){
           if( x[i]=='(' || x[i]=='[' || x[i]=='{')
           st.push(x[i]);
           else{
               if(st.empty())return false;
               else
               {
               char c=st.top();
               if( x[i]==')' && c=='(' || x[i]==']' && c=='[' || x[i]=='}' && c=='{'  )
               st.pop();
               else
               return 0;
               }
           }
       }
       if(st.empty())return 1;
       return 0;
    }

};
