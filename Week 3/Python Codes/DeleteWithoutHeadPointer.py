# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

# swap the values
def deleteNode(curr_node):
    if not curr_node or not curr_node.next:
        return
    curr_node.data, curr_node.next.data = curr_node.next.data, curr_node.data
    curr_node.next = curr_node.next.next

# copy the values
def deleteNode(curr_node):
    if not curr_node or not curr_node.next:
        return
    curr_node.data = curr_node.next.data
    curr_node.next = curr_node.next.next
    