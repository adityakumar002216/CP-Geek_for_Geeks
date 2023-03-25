void deleteAlt(struct Node *head){
    // Code here
    struct Node *temp,*rt;
    temp=head;
    rt=head;
    int k=1;
     while(temp->next!=NULL){
        temp=temp->next;
        k++;
    }
    if(k==1)
    head=head->next;
    else{
    int t=0;
    while(t<=(k-2)/2){
        rt->next=rt->next->next;
         rt=rt->next;
        t++;
    }
    }
}
