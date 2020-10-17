class Node:
    def __init__(self, data):
        self.data = data
        self.right = None
        self.down = None

def construct(mat, n):
    result = [[0 for i in range(n)] for i in range(n)]
    for i in range(n):
        for j in range(n):
            result[i][j] = Node(mat[i][j])
    for i in range(n):
        for j in range(n):
            if j+1 < n:
                result[i][j].right = result[i][j+1]
            if i+1 < n:
                result[i][j].down = result[i+1][j]    
    return result[0][0]