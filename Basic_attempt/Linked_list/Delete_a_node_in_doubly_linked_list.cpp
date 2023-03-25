class Solution
{
    public:
    Node* deleteNode(Node *head, int x)
    {
      //Your code here
      struct Node *temp;
      temp=head;
      int t=2;
      if(x==1){
          head=temp->next;
          return head;
      }
      while(t<x){
          temp=temp->next;
          t++;
      }
      temp->next=temp->next->next;
      return head;
      
    }
};
