def solution(n, arr):
    arr.sort()
    #    print(arr)
    min_diff = arr[n-1] - arr[0]
    for i in range(n-1, len(arr)):
        if arr[i] - arr[i-n+1] < min_diff:
            min_diff = arr[i] - arr[i-n+1]
    return min_diff
        
    
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = [int(x) for x in input().split()]
        students = int(input())
        print(solution(students,arr))