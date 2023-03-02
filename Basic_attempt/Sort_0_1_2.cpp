class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int r=0,b=0,c=0,y=0,p=0;
        for(int i=0;i<n;i++)
        {
            
            if(a[i]==0 )
            r++;
            if(a[i]==1)
            b++;
            if(a[i]==2)
            c++;
            
        }
    
        for(int i=0;i<r;i++){
        a[i]=0;
        p++;
        }
        
        for(int j=p;b>0;b--,j++){
        a[j]=1;
        y++;
            
        }
        for(int k=p+y;c>0;k++,c--)
        a[k]=2;
        
    }
    
};
