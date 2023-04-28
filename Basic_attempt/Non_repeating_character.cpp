class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
       //Your code here
       unordered_map<char,int>m;
       for(int i=0;i<s.length();i++)
           m[s[i]]++;
           
      for(int i=0;i<s.length();i++){
          if( m[s[i]]==1)
          return s[i];
      }
       return '$';   
      
       
    }

};
