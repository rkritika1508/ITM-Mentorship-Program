        struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;



struct node *reverse (struct node *head, int k)
{ 
 
  node *prev = NULL;
  node*nex = NULL;
  node* curr= head;
  
  int i = k;
 
  while(curr&&i--)
  {
    
      nex = curr ->next;
      curr->next= prev;
      prev = curr;
      curr=nex;
   
  }
  if(head!=NULL)
 head->next = reverse(nex,k);
 
  return prev;
}
