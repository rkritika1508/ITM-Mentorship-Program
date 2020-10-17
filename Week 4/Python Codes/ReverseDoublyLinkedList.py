'''
class Node: 
    def __init__(self, data): 
        self.data = data  
        self.next = None
        self.prev = None
'''

# Pointer swapping
def reverseDLL(head):
    #return head after reversing
    temp = None
    current = head
    while current:
        temp = current.prev
        current.prev = current.next 
        current.next = temp
        current = current.prev
    if temp is not None:
        head = temp.prev
    return head