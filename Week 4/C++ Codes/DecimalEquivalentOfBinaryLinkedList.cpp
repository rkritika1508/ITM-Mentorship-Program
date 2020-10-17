#include<bits/stdc++.h>
using namespace std;
// Below global variable is declared in code for modulo arithmetic
const long long unsigned int MOD = 1000000007;

// Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

// Should return decimal equivalent modulo 1000000007 of binary linked list 
long long unsigned int decimalValue(Node *head)
{
    if (head == NULL)
        return 0;
    struct Node* temp = head->next;
    long long unsigned int num = head->data;
    while (temp != NULL) {
        num = (2*num)%MOD + temp->data;
        temp = temp->next;
    }
    return num%MOD;
}