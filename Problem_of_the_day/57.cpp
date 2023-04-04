int minSteps(string str) {
    // Write your code here.
    int a=0,b=0;
    for(int i=1;i<str.size();i++){
        if(str[i-1]=='a' && str[i]=='b'){
            a++;
        }
        if(str[i-1]=='b' && str[i]=='a'){
            b++;
        }
    }
       if(str[str.length()-1]=='a')
       a++;
       if(str[str.length()-1]=='b')
       b++;
    
       int ans=min(a,b);
       return ans+1;
    
    
}
