# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
	# @param A : head node of linked list
	# @param B : head node of linked list
	# @return the head node in the linked list
    def addTwoNumbers(self, first, second):
        res, prev, temp = None, None, None
        carry, sum = 0, 0 

        # while both lists exist 
        while first is not None or second is not None: 
            sum = carry + (first.val if first else 0) + (second.val if second else 0) 
            # update carry for next calulation 
            carry = 1 if sum >= 10 else 0 
            # update sum if it is greater than 10 
            sum = sum % 10 
            # Create a new node with sum as data 
            temp = ListNode(sum) 
            # if this is the first node then  set it as head of the resultant list 
            if res is None: 
                res = temp 
            # If this is not the first node then connect it to the rest. 
            else:
                prev.next = temp 
      
            # Set prev for next insertion 
            prev = temp 
      
            # Move first and second pointers to next nodes 
            if first: 
                first = first.next 
            if second: 
                second = second.next 
      
        if carry > 0: 
            temp.next = ListNode(carry) 
      
        # return head of the resultant list 
        return res; 
