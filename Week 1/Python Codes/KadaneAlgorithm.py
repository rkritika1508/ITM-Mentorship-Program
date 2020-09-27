def kadane(arr, n):
    max_sum = arr[0]
    current_sum = max_sum
    for i in range(1, n):
        current_sum = max(current_sum + arr[i], arr[i])
        max_sum = max(current_sum, max_sum)
    return max_sum
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = [int(x) for x in input().split()]
        print(kadane(arr, n))