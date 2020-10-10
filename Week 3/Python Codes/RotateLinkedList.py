
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# This function should rotate list counter-
# clockwise by k and return new head (if changed) 
def rotateList(head, k):
    kth_node = head
    last_node = head
    count = 1
    while kth_node.next is not None and count < k:
        kth_node = kth_node.next
        count += 1

    while last_node.next is not None:
        last_node = last_node.next
    
    last_node.next = head
    head = kth_node.next
    kth_node.next = None
    return head