def fourElements(arr, n, X):
    def commonElements(a, b):
        if a[1] != b[1] and a[1] != b[2] and a[2] != b[1] and a[2] != b[2]:
            return False
        return True
    
    pairs = []
    
    # generate all combinations of pairs of two elements
    for i in range(n):
        for j in range(i+1, n):
            temp_sum = arr[i] + arr[j]
            pairs.append((temp_sum, i, j))
            
    pairs.sort() #sorting the pairs array
    left, right = 0, len(pairs)-1

    while(left < right):
        temp_sum = pairs[left][0] + pairs[right][0]
        #if temp_sum equals X and there are no common elements in the pair, return 1
        if (temp_sum == X) and commonElements(pairs[left], pairs[right]) == False: 
            return 1
        elif (temp_sum > X): #decrease the right pointer and point to smaller number
            right -= 1
        else: #increase the left pointer and point to bigger number
            left += 1
    return 0