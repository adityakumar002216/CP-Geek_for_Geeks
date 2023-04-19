class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
        int flag=0;
        for(int i=0; i<N; i++)
        {
            if(S[i]=='0')
            {
                flag--;
            }else{
                if(flag>=-X)
                {
                    flag=X;
                }else{
                    return 0;
                }
            }
        }
        return (flag<0)?0:1;
    }
};
