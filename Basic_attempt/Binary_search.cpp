lass Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int low=0,up=n-1,x;
   
   while(low<=up){
      x=(low+up)/2;
      if(k==arr[x])
   return x;
   else if (k<arr[x])
   up=x-1;
   else
   low=x+1;
}
return -1;
    }
};
