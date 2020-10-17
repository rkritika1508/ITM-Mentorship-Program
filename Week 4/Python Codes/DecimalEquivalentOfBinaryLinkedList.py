'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
# Iterative Approach
def decimalValue(head):
    MOD=10**9+7
    temp = head.next
    num = head.data
    while temp:
        num = 2*num + temp.data
        temp = temp.next
    return num%MOD