class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    for(int j=S.length()-1,i=0;i<j;i++,j--)
	    if(S[i]!=S[j])
	    return 0;
	    return 1;
	}

};
