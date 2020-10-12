class Node:
    def __init__(self,val):
        self.next=None
        self.data=val

# Floyd Cycle Detection Solution
def removeLoop(head):
    slowPtr, fastPtr = head, head

    while slowPtr and fastPtr and fastPtr.next:
        slowPtr = slowPtr.next
        fastPtr = fastPtr.next.next
        if slowPtr == fastPtr:
            break

    ptr1, ptr2 = head, slowPtr
    if slowPtr == fastPtr:
        # Move both pointers at the same place they will meet at loop starting node 
        while(ptr2.next != ptr1.next): 
            ptr1 = ptr1.next
            ptr2 = ptr2.next
  
        while(ptr2.next != ptr1): # Get pointer to the last node 
            ptr2 = ptr2.next
  
        # Set the next node of the loop ending node to fix the loop 
        ptr2.next = None

# Hashing Solution
def removeTheLoop(head):
    my_dict = {}
    temp = head
    last_node = None
    while temp is not None:
        if temp.next in my_dict:
            last_node = temp
            last_node.next = None
            break
        my_dict[temp] = temp.data
        temp = temp.next