#include<bits/stdc++.h>
using namespace std;

// Linked List Node structure:
struct Node
{
    int data;
    struct Node *next;
};

// Should reverse list and return new head
struct Node* reverseList(struct Node *head)
{
    struct Node* prev = NULL;
    struct Node* curr = head;
    struct Node* next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}