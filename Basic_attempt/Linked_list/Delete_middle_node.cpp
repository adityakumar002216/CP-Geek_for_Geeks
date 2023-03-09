Node* deleteMid(Node* head)
{
    // Your Code Here
    struct Node *temp,*se;
    temp=head;
    se=head;
    int r=1,s=1;
    while(temp->next!=NULL){
        temp=temp->next;
        r++;
    }
    while(s<r/2){
        s++;
        se=se->next;
    }
    se->next=se->next->next;
    return head;
}
