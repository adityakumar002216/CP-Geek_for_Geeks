class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int sum=0,k=0;
         k=(abs(cur-pos[0])*time[0]);
         
        for(int i=1;i<N;i++){
            sum=(abs(cur-pos[i]))*time[i];
            if(sum<k)
            k=sum;
            
        }
        return k;
    }
};
