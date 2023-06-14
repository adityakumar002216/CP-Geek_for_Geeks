class Solution {
  public:
    long long maxDiamonds(int A[], int N, int k) {
        // code here
        long long int x=0;
        priority_queue<int> y;
    for (int i = 0; i < N; i++)
        y.push(A[i]);
    
    for (int i = 0; i < k; i++) {
        int pre = y.top();
        y.pop();
        x += pre;
        y.push(pre / 2);
    }
    return x;
    }
};
