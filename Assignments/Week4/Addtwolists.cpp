/*struct Node{
int data;
struct Node*next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
struct Node* reverse(struct Node*head)
{
    struct Node*curr=head;
    struct Node*prev=NULL;
    struct Node*nex=head;
    while(curr)
    {
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    return(prev);
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
  
    first=reverse(first);
    second=reverse(second);
    struct Node*res=NULL;
    int carry=0;
    int sum =0;
    while(first!=NULL||second!=NULL)
    {int a= (first!=NULL)?first->data:0;
    int b= (second!=NULL)?second->data:0;
        sum=a+b+carry;
        carry=(sum-(sum%10))/10;
        sum=sum%10;
        Node*node=(struct Node*)malloc(sizeof(struct Node));
        node->data=sum;
        node->next=NULL;
        if(res==NULL)
         res=node;
        else
        {
            
            node->next=res;
            res=node;
       }
        if(first)first=first->next;
        if(second)second=second->next;
    }
    if(carry>0)
    {
        struct Node*node=(struct Node*)malloc(sizeof(struct Node));
    node->data=carry;
    node->next=res;
    res->next=node;
    
        
    }
    return res;
    
}
