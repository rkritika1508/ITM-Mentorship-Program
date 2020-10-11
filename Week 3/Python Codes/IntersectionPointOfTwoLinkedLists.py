class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

def getPoint(head1, head2, diff): # temporary function
    # assuming that head1 is bigger
    count = 0
    while (count < diff):
        head1 = head1.next
        count += 1

    while (head1 and head2):
        if (head1 == head2):
            return head1.data
        head1 = head1.next
        head2 = head2.next
    return -1

# difference of nodes count method
def intersetPoint(head1,head2):
    c1, c2, diff, result = 0, 0, None, None
    temp = head1
    while (temp != None):
        temp = temp.next
        c1 += 1

    temp = head2
    while (temp != None):
        temp = temp.next
        c2 += 1
    
    diff = abs(c1 - c2)
    if (c1>c2):
        result = getPoint(head1, head2, diff)
    elif (c1<c2):
        result = getPoint(head2, head1, diff)
    else:
        result = getPoint(head1, head2, diff)
    return result


# Stack Method
def intersetPoint(head1, head2):
    s1, s2, temp = [], [], None
    while head1:
        s1.append(head1)
        head1 = head1.next
    
    while head2:
        s2.append(head2)
        head2 = head2.next

    while s1 and s2:
        if s1[-1] == s2[-1]:
            temp = s1[-1]
        s1.pop(-1)
        s2.pop(-1)
    if temp is not None:
        return temp.data
    return -1