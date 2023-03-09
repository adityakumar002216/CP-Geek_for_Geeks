struct Node* insertInMiddle(struct Node* head, int x)
{
    //code here
    struct Node *temp,*rt,*newnode;
	temp=head;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	
	int r=0,k=0;
	newnode->data=x;
	while(temp->next!=NULL && newnode!=NULL){
	    temp=temp->next;
	    r++;
	   }
	   rt=head;
	  
	   while(k<r/2 && rt!=NULL){
	       rt=rt->next;
	       k++;
	   }
	   newnode->next=rt->next;
	   rt->next=newnode;
	   return head;
}
