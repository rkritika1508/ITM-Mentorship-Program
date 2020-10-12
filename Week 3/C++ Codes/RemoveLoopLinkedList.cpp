#include<bits/stdc++.h>
using namespace std;

//structure of linked list node:
struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void removeLoop(Node* head) {
    struct Node* slowPtr = head;
    struct Node* fastPtr = head;
    while (slowPtr && fastPtr && fastPtr->next) {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next;
        if (slowPtr == fastPtr)
            break;
    }
    struct Node* ptr1 = head;
    struct Node* ptr2 = slowPtr;
    if (slowPtr == fastPtr) {
        while (ptr1 != ptr2) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        while (ptr1->next != ptr2)
            ptr1 = ptr1->next;
        ptr1->next = NULL;
    }
}