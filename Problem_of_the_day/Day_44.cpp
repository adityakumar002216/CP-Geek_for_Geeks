class Solution{   
public:
    int minIteration(int N, int M, int x, int y){    
        // code here
        int sol=0;
        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=M; j++)
            {
                sol=max(sol,abs(i-x)+abs(j-y));
            }
        }
        
        return sol;
    }
};
