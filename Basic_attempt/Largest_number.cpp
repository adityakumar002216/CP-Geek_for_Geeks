class Solution{
public:
    string findLargest(int N, int S){
        // code here
        string s;
        int k=9;
        int p=0;
        if(N==1 && S==0)
        return "0";
        if(S==0  ){
        
        
        return "-1";
        }
        if(k*N>=S)
        {
        for(int i=1;i<N;i++){
        if(k*i>S)
        break;
        
        s+="9";
         p=i;   
        }
        
        k=k*p;
        
        
        int t=S-k;
        s+=to_string(t);
        for(int i=p;i<N-1;i++)
        s+="0";
        return s;
            
        }
        return "-1";
    }
};
