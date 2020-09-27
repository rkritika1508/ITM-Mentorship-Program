'''
Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

Example:
Given the following matrix:
[
    [ 1, 2, 3 ],
    [ 4, 5, 6 ],
    [ 7, 8, 9 ]
]

You should return: [1, 2, 3, 6, 9, 8, 7, 4, 5]
'''

def spiral_order_matrix(matrix):
    top = 0
    bottom = len(matrix) - 1
    left = 0
    right = len(matrix[0]) - 1
    result = []
    direction = 0 
    '''
    There are 4 directions:
    0 --> right
    1 --> bottom
    2 --> left
    3 --> up
    '''
    while left <= right and top <= bottom:
        if direction == 0:
            for i in range(left, right + 1):
                result.append(matrix[top][i])
            top += 1
        elif direction == 1:
            for i in range(top, bottom+1):
                result.append(matrix[i][right])
            right -= 1
        if direction == 2:
            for i in range(right, left-1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1
        if direction == 3:
            for i in range(bottom, top-1, -1):
                result.append(matrix[i][left])
            left += 1
        direction = (direction + 1) % 4
    return result

if __name__ == '__main__':
    matrix = [
        [ 1, 2, 3 ],
        [ 4, 5, 6 ],
        [ 7, 8, 9 ],
        [10, 11, 12]
        ]
    print(spiral_order_matrix(matrix))