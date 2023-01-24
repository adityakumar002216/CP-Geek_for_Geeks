// question Convert an array to reduced form
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void convert(int arr[], int n) {
    vector<pair<int,int>> vec;
	    for(int i=0;i<n;i++)vec.push_back({arr[i],i});
	    sort(vec.begin(),vec.end());
	    for(int i=0;i<n;i++){
	        arr[vec[i].second]=i;
	    }
	}
};
