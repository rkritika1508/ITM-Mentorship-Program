#include<bits/stdc++.h>
using namespace std;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *t = head;   // here t will point to head node
    SinglyLinkedListNode *r = head;
    
    if(head == NULL || head->next==NULL) // if linked list is empty or consits only of 1 node
        return false;
    
    while( r!=NULL&&r->next!=NULL) {
        t = t->next; // Tortoise node i.e. node which will move one step at a time
        r = r->next->next; // Hare node i.e. node which will move two steps at a time
        if(t==r) return true;
    }
    return false;
}
