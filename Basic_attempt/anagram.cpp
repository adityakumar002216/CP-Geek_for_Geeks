class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        if(a.size()==b.size()){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i])
            return 0;
        }
      return 1;  
        }
        return 0;
    }

};
