#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
    // res is head node of the resultant list 
    ListNode* res = NULL; 
    ListNode *temp, *prev = NULL; 
    int carry = 0, sum; 
  
    // while both lists exist 
    while (first != NULL || second != NULL) { 
        sum = carry + (first ? first->val : 0) + (second ? second->val : 0); 
        // update carry for next calulation 
        carry = (sum >= 10) ? 1 : 0; 
        // update sum if it is greater than 10 
        sum = sum % 10; 
        // Create a new node with sum as data 
        temp = new ListNode(sum); 
        // if this is the first node then  set it as head of the resultant list 
        if (res == NULL) 
            res = temp; 
        // If this is not the first node then connect it to the rest. 
        else
            prev->next = temp; 
  
        // Set prev for next insertion 
        prev = temp; 
  
        // Move first and second pointers to next nodes 
        if (first) 
            first = first->next; 
        if (second) 
            second = second->next; 
    } 
  
    if (carry > 0) 
        temp->next = new ListNode(carry); 
  
    // return head of the resultant list 
    return res; 
}
