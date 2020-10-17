class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

class LinkedList:
    def __init__(self):
        self.head=None

def update(llist, p): # Input is linked list
    nth_node, last_node, counter = llist.head, llist.head, 1
    # getting the Nth Node
    while counter < p:
        nth_node = nth_node.next
        counter += 1
    counter = 0
    # getting the last node
    while last_node.next:
        last_node = last_node.next
    # changing next of last node to head
    last_node.next = llist.head
    # changing prev of head to last node
    llist.head.prev = last_node
    # changing head of linked list to (n+1)th node
    llist.head = nth_node.next
    # changing next of nth node to NULL
    nth_node.next = None
    # changing prev of head to NULL
    llist.head.prev = None
    return llist
