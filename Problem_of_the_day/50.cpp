class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        set<int>s;
        for(int i=1;i<=leaves;i++)
        s.insert(i);
        int k=1;
        for(int i=0;i<N;i++){
            k=1;
        if(k<=leaves && s.count(frogs[i]*k)){
             while(frogs[i]*k<=leaves){
                 s.erase(frogs[i]*k);
                 if(s.size()==0)
                 return 0;
                 k++;
             }
            }
        }
            
        
        return s.size();
    }
};
