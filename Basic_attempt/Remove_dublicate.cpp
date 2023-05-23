class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    string k;
	    map<char,int>m;
	    for(int i=0;i<S.length();i++){
	        m[S[i]]++;
	        if(m[S[i]]==1)
	        k.push_back(S[i]);
	       
	        
	    }
	    
	    return k;
	}
};
