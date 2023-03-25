int isLengthEvenOrOdd(struct Node* head)
{
     //Code here
     int k=1;
     while(head->next!=NULL){
         k++;
         head=head->next;
     }
     if(k%2==0)
     return 0;
     return 1;
}
