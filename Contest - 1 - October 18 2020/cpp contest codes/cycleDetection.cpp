// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *t = head; 
SinglyLinkedListNode *r = head;
if(head == NULL || head->next==NULL) // Condition 1
{
    return false;
}
while( r!=NULL&&r->next!=NULL) // Condition 2
{
    t = t->next; // Tortoise node
    r = r->next->next; // Hare node
    if(t==r)  // Condition 3
    {
        return true;
        break;
    }

}
return false;
}
