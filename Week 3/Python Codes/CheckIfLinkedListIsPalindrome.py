# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

def isPalindrome(head):
    temp = head
    l = []
    while(temp is not None):
        l.append(temp.data)
        temp = temp.next
    temp = head
    while (temp is not None):
        num = l.pop()
        if (temp.data != num):
            return False
        temp = temp.next
    return True