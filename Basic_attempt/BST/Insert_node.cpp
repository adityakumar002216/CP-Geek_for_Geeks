Node* insert(Node* root, int val) {
    // Your code here
    struct Node *p;
      struct Node *q;
      struct Node *r;
      r=new Node(val);
      
      r->left=NULL;
      r->right=NULL;
      q=NULL;
      p=root;
      if(p==NULL)
      return r;
      
     while(p!=NULL){
        if(p->data<val){
          q=p;
        p=p->right;
     }
    else  if(p->data==val)
       return root;
        else {
          q=p;
        p=p->left;
        
        }
        
        
      }
      
      
       if(q->data>val)
      q->left=r;
      else
      q->right=r;
      return root;
        
    
        
    
}
