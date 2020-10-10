#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

bool detectLoop(Node* head)
{
    struct Node* slowPointer = head;
    struct Node* fastPointer = head;
    while (slowPointer != NULL and fastPointer != NULL and fastPointer->next != NULL) {
        slowPointer = slowPointer->next;
        fastPointer = fastPointer->next->next;
        if (slowPointer == fastPointer)
            return true;
    }
    return false;
}
