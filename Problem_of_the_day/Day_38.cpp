class Solution{
    int dir[5] = {1,0,-1,0,1};
    int N,M,ans;
    void bfs(bool flag,queue<pair<int,int>>&pq,vector<vector<int>> &mat,int india[1000][1000]){
        for(int i = 0;i<N;i++){
            if(flag) india[i][0] = -1;
            pq.push({i,flag?0:M-1});}
        for(int i = 0;i<M;i++){
            if(flag) india[0][i] = -1;
            pq.push({flag?0:N-1,i});}
        while(pq.size()){
            auto top = pq.front();pq.pop();
            if(!flag && mat[top.first][top.second]==-1) continue;
            if(!flag && india[top.first][top.second]) ans++;
            for(int i = 0;i<4;i++){
                int x = top.first+dir[i];
                int y = top.second+dir[i+1];
                if(x<0 || y<0 || x==N || y==M || mat[x][y]<mat[top.first][top.second] || (flag && india[x][y]==1)) continue;
                pq.push({x,y});
                if(flag)india[x][y] = 1;
            }
            if(!flag) mat[top.first][top.second] = -1;
        }
    }
    
public:
    int water_flow(vector<vector<int>> &mat,int n,int m){
    // Write your code here.
        N = n;M = m;
        queue<pair<int,int>>pq;
        // mat[N-1][0] = mat[0][M-1] = INT_MIN;
        
        int india[1000][1000]={0};
        
       bfs(1,pq,mat,india);
        ans = 0;
        bfs(0,pq,mat,india);
        return ans;
    }
};
