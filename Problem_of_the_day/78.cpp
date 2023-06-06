class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        Node* pres=root;
        
        while(pres)
        {
            if(pres->key>=key)
            pres=pres->left;
            else{
                pre=pres;
                pres=pres->right;
            }
            
        }
        Node* post=root;
        while(post)
        {
            if(post->key<=key)
            post=post->right;
            else{
                suc=post;
                post=post->left;
            }
            
        }
        
      
        
    }
};
