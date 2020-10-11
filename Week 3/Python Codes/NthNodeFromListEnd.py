# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

# Iterative Approach
def getNthfromEnd(head,n):
    length = 0
    temp = head
 
    # count the number of nodes in Linked List
    while temp: 
        temp = temp.next
        length += 1
 
    # check if value of n is not more than length of the linked list
    if length < n:
        return -1
 
    temp = head
    # get the (len-n+1)th node from the beginning
    for i in range(1, length-n+1):
        temp = temp.next
    return temp.data

# Two Pointer approach
def getNthfromEnd(head,n):
    main_ptr, ref_ptr = head, head
    count = 0
    if head is None:
        return -1
        
    while count<n:
        if ref_ptr is None:
            return -1
        ref_ptr = ref_ptr.next
        count += 1
     
    while ref_ptr is not None:
        main_ptr = main_ptr.next
        ref_ptr = ref_ptr.next
    return main_ptr.data