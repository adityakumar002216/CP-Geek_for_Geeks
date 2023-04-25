bool isBinary(string str)
{
   // Your code here
   for(int i=0;i<str.length();i++){
       if(str[i]=='0'  || str[i]=='1')
       continue;
       else
       return false;
   }
       return true;
   }
