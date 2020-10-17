def count_triplets(arr):
    arr.sort()
    i = len(arr) - 1
    count = 0
    while i >= 0:
        j = 0
        k = i-1
        while j < k:
            if arr[k] + arr[j] == arr[i]:
                count += 1
                j += 1
                k -= 1
            elif arr[j] + arr[k] < arr[i]:
                j += 1
            else:
                k -= 1
        i -= 1
    if count == 0:
        return -1
    return count
    
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = [int(x) for x in input().split()]
        print(count_triplets(arr))