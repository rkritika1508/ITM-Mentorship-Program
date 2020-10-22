#include<bits/stdc++.h>
using namespace std;

struct DoublyLinkedListNode {
    int data;
    DoublyLinkedListNode* next;
    DoublyLinkedListNode* prev;
};

DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode *temp = head;  // here pointer temp will point head of linked list
    DoublyLinkedListNode *current = head;     //here we will copy head's address in current pointer 
   
    while(current != NULL) {  // if current is not null swap the next and prev node
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    } //after while loop our linked list will reversed
    if(temp!=NULL)  // if temp is not null assign prev to head 
        head = temp->prev;
    return head;  
}
