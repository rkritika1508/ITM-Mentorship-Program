#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

// root: head node
Node *removeDuplicates(Node *head)
{
 // your code goes here
    struct Node* temp = head;
    while (temp->next != NULL) {
        if (temp->data == temp->next->data)
            temp->next = temp->next->next;
        else
            temp = temp->next;
    }
    return head;
}