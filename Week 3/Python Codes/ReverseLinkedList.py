
# Node Class
class node:
    def __init__(self, val):
        self.data = val
        self.next = None

# This function should reverse linked list and returns head of the modified linked list
def reverseList(head):
    prev, curr, next = None, head, None
    while curr is not None:
        next = curr.next
        curr.next = prev
        prev = curr
        curr = next
    head = prev
    return head