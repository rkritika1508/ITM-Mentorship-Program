
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};




Node* segregate(Node *head) {
    
    
    int hash[3]={0,0,0};
    Node*temp=head;
    while(temp)
    {
        hash[temp->data]++;
        temp=temp->next;
    }
    temp=head;
    int count=0,i=0;
    while(temp)
    {if(hash[i]==0)
    i++;
    if(hash[i]==0)
    i++;
    temp->data=i;
    hash[i]--;
        temp=temp->next;
    
    
    }
    return head;
    
}
