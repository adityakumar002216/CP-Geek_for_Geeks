class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        
        Node* new_Node = new Node(data);
        Node *temp;
        temp=head;
        if(new_Node->data<head->data){
            new_Node->data = data;
              new_Node->next = head;
              head = new_Node;
              return head;
        }
        
         while(temp->next->data<new_Node->data){
            temp=temp->next;
            if(temp->next==NULL)
            break;
            }
            if(temp->next==NULL){
                new_Node->next=NULL;
                temp->next=new_Node;
                return head;
            }
            else{
            new_Node->next =temp->next;
              temp->next=new_Node;
              
        
        return head;
            }
        
    }
};
