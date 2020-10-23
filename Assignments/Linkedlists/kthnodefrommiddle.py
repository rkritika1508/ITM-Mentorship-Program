# Definition for singly-linked list.
# class ListNode:
#    def __init__(self, x):
#        self.val = x
#        self.next = None

class Solution:
    # @param A : head node of linked list
    # @param B : integer
    # @return an integer
    def solve(self, A, B):
        floyd1=A
        floyd2=A
        while floyd1:
            
            if floyd1.next!=None:
                floyd1=floyd1.next.next
                floyd2=floyd2.next
            else:
                break
                
        ptr1=A
        ptr2=A
        #print(floyd2.val)
        for i in range(B):
            ptr1=ptr1.next
            if ptr1==floyd2.next:
                return -1
        while ptr1!=floyd2:
            ptr1=ptr1.next
            ptr2=ptr2.next
        return ptr2.val
            
        
