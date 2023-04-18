class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    // Your code goes here
	    string k;
	    k+=S[0];
	    for(int i=1;i<S.length();i++){
	    if(S[i-1]==' ' && S[i]!=' '){
	     k+=S[i];
	    }
	    }
	    
	 return k;   
	}
};
