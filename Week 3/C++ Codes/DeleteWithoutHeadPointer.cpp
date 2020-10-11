#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;

// Swap the values
void deleteNode(Node *node)
{
    // Your code here
    if (node == NULL or node->next == NULL)
        return;
    int val = node->data;
    node->data = node->next->data;
    node->next->data = val;
    node->next = node->next->next;
}

// Copy the values
void deleteNode(Node *node)
{
   // Your code here
   node->data = node->next->data;
   node->next = node->next->next;
}
