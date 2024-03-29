class Solution{
int count = 0;
public:
    unordered_set<int> dfs(Node *root, int &k){
        
        unordered_set<int> a, b;
        if(root->left) a = dfs(root->left, k);
        if(root->right) b = dfs(root->right, k);
        
        unordered_set<int> c;
        c.insert(a.begin(), a.end());
        c.insert(b.begin(), b.end());
        c.insert(root->data);
        
        if(c.size()<=k) count++;
        
        return c;

    }
    int goodSubtrees(Node *root,int k){
        dfs(root, k);
        return count;
    }
    
};
