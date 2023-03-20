bool isCircular(struct Node *head){
    //code here
    struct Node *temp,*rt;
    temp=head;
    rt=head;
    while(temp->next!=NULL){
        temp=temp->next;
        if(temp->next==rt)
        return true;
        }
    
    return temp->next==rt;
}
