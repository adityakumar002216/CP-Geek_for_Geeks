//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int getMinimumDays(int N,string S, vector<int> &P) {
        int t=0;
        for(int i=1;i<N;i++){
           if(S[i]==S[i-1])
            t++;
        }
        if(t==0)
        return 0;
         for(int i=0;i<N; i++)
        {
            int r=P[i];
            if(r !=0 and S[r]==S[r-1])
            {
                t--;
            }
            if(r!=N-1 and S[r]==S[r+1])
            {
                t--;
            }
            
            if(t==0)
            {
                return i+1;
            }
            S[r]='?';
        }
        
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        string S;cin>>S;
        
        vector<int> P(N);
        Array::input(P,N);
        
        Solution obj;
        int res = obj.getMinimumDays(N,S, P);
        
        cout<<res<<endl;
        
    }
}
