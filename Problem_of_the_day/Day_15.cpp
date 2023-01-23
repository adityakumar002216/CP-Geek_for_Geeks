// question Geeks And The String
{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        // code here
        string k;
        for(int i=0;i<s.length();i++){
             if(k.empty())
            k.push_back(s[i]);
            else if( !k.empty() && k.back()==s[i])
            k.pop_back();
            else
            k.push_back(s[i]);
        }
        if(k.size()==0)
        return "-1";
        else
        return k;
        }
};
 
 //2nd method 

 class Solution {
  public:
    string removePair(string s) {
        // code here
       
        for(int i=1;i<s.length();i++){
            if(s[i-1]==s[i]){
            s.erase(s.begin()+i);
            s.erase(s.begin()+(i-1));
            i--;
          }
          
        }
        
        for(int i=1;i<s.length();i++){
            if(s[i-1]==s[i]){
            s.erase(s.begin()+i);
            s.erase(s.begin()+(i-1));
            i--;
          }
          
        }
        
        for(int i=1;i<s.length();i++){
            if(s[i-1]==s[i]){
            s.erase(s.begin()+i);
            s.erase(s.begin()+(i-1));
            i--;
          }
          
        }
        
        for(int i=1;i<s.length();i++){
            if(s[i-1]==s[i]){
            s.erase(s.begin()+i);
            s.erase(s.begin()+(i-1));
            i--;
          }
          
        }
        
        if(s.length()==0)
        return "-1" ;       
        return s;
        
    }
};
