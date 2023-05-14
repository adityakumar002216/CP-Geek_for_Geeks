class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int x=n/100;
        int y=n/10;
        int z=y%10;
        int c=n%10;
      
        if(n==1000)
        return "No";
        if((x*x*x)+(z*z*z)+(c*c*c)==n)
        return "Yes";
        return "No";
    }
};
