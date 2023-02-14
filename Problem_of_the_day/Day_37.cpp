class Solution{   
public:
     int minCost(vector<vector<int>> &colors, int n) {
        // Write your code here.
        int a=0,b=0,c=0;
        for(int i=n-1;i>=0;i--){
            int x=a,y=b,z=c;
            a=colors[i][0]+min(y,z);
            b=colors[i][1]+min(x,z);
            c=colors[i][2]+min(x,y);
        }
        return min(a,min(b,c));
    }
};
