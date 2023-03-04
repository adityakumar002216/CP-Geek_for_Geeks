int getNthFromLast(Node *head, int n)
{
       // Your code here
       struct Node *temp,*rt;
       int s=0;
       temp=head;
       rt=head;
       while(temp->next!=NULL){
           temp=temp->next;
           s++;
       }
       
       if(n>s+1)
       return -1;
       int k=s-n+1;
       while(k){
           rt=rt->next;
           k--;
           
       }
       return rt->data;
}
