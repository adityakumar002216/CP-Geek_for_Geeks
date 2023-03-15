Node *removeDuplicates(Node *head)
{
 // your code goes here
  if ( head==NULL || head->next == NULL){
            return head;
        }
        struct Node* prev = head;
        struct Node* temp = head->next;

        while(temp!=NULL){
            if(prev->data==temp->data){
                temp=temp->next;
            }else{
                prev->next=temp;
                prev=temp;
                temp=temp->next;
            }

        }

        prev->next=temp;
        prev=temp;

        return head;
   }
