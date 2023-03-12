class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        //code here
        vector<int>v;
        int k=0,x=0,r=0;
        for(int i=0;i<N;i++){
            k=0;
            for(int j=0;j<N;j++){
                if(mat[i][j]==1)
                k++;
                if(k>x)
                {
                   x=k;
                  r=i;
                 }
            }
            
        }
        v.push_back(r);
        v.push_back(x);
        return v;
        
    }
};
