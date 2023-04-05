class Solution { 
  public: 
    int countSpecialNumbers(int N, vector<int> arr) { 
        // Code here  
       map<int,int> m; 
       int cnt=0; 
       for(int i=0;i<N;i++) m[arr[i]]++; 
       for(int i=0;i<N;i++){ 
           if(m[arr[i]]>0) { 
               for(int j=0;j<N;j++){ 
                   if(j!=i and arr[i]%arr[j]==0) { 
                      cnt+=m[arr[i]]; 
                      m.erase(arr[i]); 
                      break; 
                   } 
               } 
           } 
       } 
       return cnt; 
    } 
};
