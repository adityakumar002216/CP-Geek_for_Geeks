int GetNth(struct node* head, int index){
  // Code here
  int r=0;
  while(r<index-1){
      head=head->next;
      r++;
  }
  return head->data;
}
