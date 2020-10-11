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

/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */

int getPoint(Node* head1, Node* head2, int diff) { // temporary function
    // assuming that head1 is bigger
    int count = 0;
    while (count < diff) {
        head1 = head1->next;
        count++;
    }
    while (head1 && head2) {
        if (head1 == head2)
            return head1->data;
        head1 = head1->next;
        head2 = head2->next;
    }
    return -1;
}
// Difference of nodes counts method  
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int c1 = 0, c2 = 0, diff, result;
    Node* temp = head1;
    while (temp != NULL) {
        temp = temp->next;
        c1++;
    }
    temp = head2;
    while (temp != NULL) {
        temp = temp->next;
        c2++;
    }
    diff = abs(c1 - c2);
    if (c1>c2)
        result = getPoint(head1, head2, diff);
    else if (c1<c2)
        result = getPoint(head2, head1, diff);
    else
        result = getPoint(head1, head2, diff);
    return result;
}


// Stack Implementation
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    stack<Node*>s1;
    stack<Node*>s2;
    Node* temp = NULL;
    while (head1 != NULL) {
        s1.push(head1);
        head1 = head1->next;
    }
    while (head2 != NULL) {
        s2.push(head2);
        head2 = head2->next;
    }
    while (!s1.empty() && !s2.empty()) {
        if (s1.top() == s2.top()) {
            temp = s1.top();
        }
        s1.pop();
        s2.pop();
    }
    if (temp != NULL)
        return temp->data;
    return -1;
}