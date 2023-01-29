//quetion for minoperation to equal the number
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int solve(int a, int b) {
        // code here
        if(a==b)
        return 0;
        if((a&b)==a or b==(a&b))
        return 1;
        return 2;
    }
};
