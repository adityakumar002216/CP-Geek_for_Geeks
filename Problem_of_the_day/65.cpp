//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        // Write your code here.
         seats.push_back(0);
        seats.insert(seats.begin(),0);
        for(int i=1;i<seats.size()-1;i++){
            if(seats[i]+seats[i-1]+seats[i+1]==0){
            
                n--;
                ++i;
            }
            
        }
        
        return n<=0;
    }
};
