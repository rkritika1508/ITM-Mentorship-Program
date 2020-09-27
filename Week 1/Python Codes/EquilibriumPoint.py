def equilibrium(n, arr):
    total = sum(arr)
    sum_now = 0
    if len(arr) == 1:
        return 1
    for i in range(n-1):
        sum_now += arr[i]
        if sum_now == total - sum_now - arr[i+1]:
            return i+2
    return -1
    
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = [int(x) for x in input().split()]
        print(equilibrium(n, arr))