class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        // Your code here
        stack<Node*> st;
    Node* curr = root;
    Node* previous = NULL;
    while (curr != NULL || !st.empty())
    {
        if (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        else
        {
            curr = st.top();
            st.pop();
            if (previous && previous->data >= curr->data)
                return false;
            previous = curr;
            curr = curr->right;
        }
    }
    return true;
    }
};
