int getMiddle(Node *head)
    {
        // Your code here
        
    struct Node *temp,*rt;
    temp=head;
    int k=0,r=0;
    rt=head;
    while(temp->next!=NULL){
        temp=temp->next;
        k++;
    }
    if(r%2==0)
    k=k+1;
    while(r<k/2){
        rt=rt->next;
        r++;
    }
    return rt->data;
    }
};
