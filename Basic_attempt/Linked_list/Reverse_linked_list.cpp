class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        struct Node *prenode,*currentnode,*nextnode;
        currentnode=head;
        prenode=nextnode=NULL;
        while(currentnode!=NULL){
            nextnode=currentnode->next;
            currentnode->next=prenode;
            prenode=currentnode;
            currentnode=nextnode;
        }
        head=prenode;
        return head;
        
    }
    
};
