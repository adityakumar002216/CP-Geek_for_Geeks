class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        int matrix1[n][n];
        for(int k=0,i=n-1;i>=0;i--,k++){
            for(int j=0;j<n;j++){
                matrix1[k][j]=matrix[j][i];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=matrix1[i][j];
            }
        }
    } 
};
