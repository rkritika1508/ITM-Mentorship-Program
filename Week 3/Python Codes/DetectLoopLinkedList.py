# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

def detectLoop(head):
    slow_pointer = head
    fast_pointer = head
    while (slow_pointer and fast_pointer and fast_pointer.next):
        slow_pointer = slow_pointer.next
        fast_pointer = fast_pointer.next.next
        if slow_pointer == fast_pointer:
            return True
    return False