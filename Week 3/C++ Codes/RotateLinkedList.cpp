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

// This function should rotate list counter-clockwise
// by k and return new head (if changed)
Node* rotate(Node* head, int k)
{
    int counter = 1;
    struct Node* last = head;
    struct Node* kth = head;
    while (counter < k) {
        kth = kth->next;        
        counter += 1;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = head;
    head = kth->next;
    kth->next = NULL;
    return head;
}
