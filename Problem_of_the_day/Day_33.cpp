//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        int a=0,b=0,c=0,d=0,e=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='b')
            a++;
            if(s[i]=='a')
            b++;
            if(s[i]=='l')
            c++;
            if(s[i]=='o')
            d++;
            if(s[i]=='n')
            e++;
        }
    int r=min({a/1,b/1,c/2,d/2,e/1});
        
         return r;
        
            
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
