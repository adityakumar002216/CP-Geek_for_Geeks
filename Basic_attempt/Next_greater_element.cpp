class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> input, int n){
        // Your code here
        
    vector<long long> result(n, -1);
 
    stack<long long> s;
 
    
    for (int i = n - 1; i >= 0; i--)
    {

        while (!s.empty())
        {
            
            if (s.top() <= input[i]) {
                s.pop();
            }
        
            else {
                result[i] = s.top();
                break;
            }
        }
 
    
        s.push(input[i]);
    }
 
    return result;
    }
};
