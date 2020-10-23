struct node
{

    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }

}*head;


Node* pairWiseSwap(struct Node* head) {
struct Node*temp=head;
if(head==NULL)
return head;
if(head->next!=NULL)pairWiseSwap(head->next->next);
int c;
if(temp->next!=NULL)
{c=temp->data;
temp->data=temp->next->data;
temp->next->data=c;
}
return(head);
    
}
