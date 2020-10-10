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

/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    stack<int> s;
    struct Node *temp = head;
    while (temp != NULL) {
        s.push(temp->data);
        temp = temp->next;
    }
    while (head != NULL) {
        int num = s.top();
        s.pop();
        if (head->data != num)
            return false;
        head = head->next;
    }
    return true;
}