class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        int hero[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            hero[j][i]=matrix[i][j];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            matrix[i][j]=hero[i][j];
        }
    }
};
