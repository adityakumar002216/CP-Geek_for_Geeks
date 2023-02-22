class Solution{
    public:
    void connect(Node *root)
    {
        if(root==NULL) return;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int x = q.size();
            for(int i=0;i<x;i++){
                Node *curr = q.front();
                q.pop();
                if(i==x-1) curr->nextRight = NULL;
                else curr->nextRight = q.front();
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
        }
    }    
};

