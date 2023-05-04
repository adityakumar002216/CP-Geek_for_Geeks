vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>v;
  if (root == nullptr) {
        return v;
    }
    list<Node*> queue;
    queue.push_back(root);
    Node* curr = nullptr;
    while (!queue.empty())
    {
        int size = queue.size();
        int i =0;
        while (i++ < size)
        {
            curr = queue.front();
            queue.pop_front();
 
            if (i == 1) {
                v.push_back(curr->data);
            }
 
            if (curr->left) {
                queue.push_back(curr->left);
            }
 
            if (curr->right) {
                queue.push_back(curr->right);
            }
        }
    }
   return v;
}
