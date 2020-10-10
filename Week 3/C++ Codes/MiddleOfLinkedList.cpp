#include<bits/stdc++.h>
using namespace std;

// Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

// Method - 1: Iterative Approach
int getMiddle(Node *head)
{
    int length = 0, counter = 0;
    struct Node* temp = head;
    if (head == NULL)
        return -1;
    while (temp != NULL) {
        temp = temp -> next;
        length += 1;
    }
    temp = head, counter = 0;
    while (counter <= length / 2) {
        if (counter == (length/2))
            return temp->data;
        temp = temp->next;
        counter += 1;
    }    
}

// Method 2 - Two Pointer Approach
int getMiddle(Node *head)
{
    struct Node *fastPtr = head;
    struct Node *slowPtr = head;
    if (head == NULL)
        return -1;
    
    if (head != NULL) {
        while (fastPtr != NULL && fastPtr->next != NULL) {
            fastPtr = fastPtr->next->next;
            slowPtr = slowPtr->next;
        }
    }
    return slowPtr->data;
}
