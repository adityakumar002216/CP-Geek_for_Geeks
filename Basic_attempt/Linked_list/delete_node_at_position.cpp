Node* deleteNode(Node *head,int position)
{
    //Your code here
    struct Node *temp;
    temp=head;
    int r=1;
    if(position==1){
     head=temp->next; 
     return head;
    }
    while(r<position-1){
        temp=temp->next;
        r++;
    }
    temp->next=temp->next->next;
    return head;
    
}
