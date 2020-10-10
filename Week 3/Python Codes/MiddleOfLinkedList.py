'''
class node:
    def __init__(data):
        self.data = data
        self.next = None
'''


# Method 1: Iterative Approach
def findMid(head):
    total, temp = 0, head
    if temp is None:
        return -1
    while temp is not None:
        temp = temp.next
        total += 1
    
    count, temp = 0, head
    while count <= total//2:
        if count == total//2:
            return temp.data
        count += 1
        temp = temp.next



# Method 2: Two Pointer Approach
def findMid(head):
    if head is None:
        return -1
    slowPtr, fastPtr = head, head
    if head is not None:
        while (fastPtr is not None and fastPtr.next is not None):
            slowPtr = slowPtr.next
            fastPtr = fastPtr.next.next
    return slowPtr.data

