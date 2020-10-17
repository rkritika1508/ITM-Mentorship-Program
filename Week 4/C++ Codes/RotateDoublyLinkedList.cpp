#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  struct node*next,*prev;
  
  node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};


struct node*update(struct node*head,int p)
{
    struct node* nth_node = head;
    struct node* last_node = head;
    int counter = 1;

    // getting the Nth Node
    while (counter < p) {
        nth_node = nth_node->next;
        counter += 1;
    }
        
    counter = 0;
    
    // getting the last node
    while (last_node->next)
        last_node = last_node->next;
    
    // changing next of last node to head
    last_node->next = head;
    // changing prev of head to last node
    head->prev = last_node;
    // changing head of linked list to (n+1)th node
    head = nth_node->next;
    // changing next of nth node to NULL
    nth_node->next = NULL;
    // changing prev of head to NULL
    head->prev = NULL;
    return head;
}