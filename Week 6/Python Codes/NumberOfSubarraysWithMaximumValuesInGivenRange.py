def subarrayTotal(n):
    return (n*(n+1))//2
    
def subarrayCount(n, L, R, arr):
    result = 0
   
    # exc - count of elements smaller than L in current valid subarray. 
    # inc - count of elements smaller than or equal to R. 
    exc, inc = 0, 0
   
    for i in range(n): 
   
        # If the element > R, add current value to result and reset values of exc and inc. 
        if (arr[i] > R): 
            result = result + (subarrayTotal(inc) - subarrayTotal(exc)) 
            inc, exc = 0, 0
   
        # if it is less than L, then it is included in the sub-arrays 
        elif (arr[i] < L):  
            inc, exc = inc+1, exc+1
          
        # if >= L and <= R, then count of subarrays formed by previous chunk 
        # of elements formed by only smaller elements is reduced from result. 
        else:  
            result -= subarrayTotal(exc) 
            exc, inc = 0, inc + 1
   
    result = result + (subarrayTotal(inc) - subarrayTotal(exc)) 
    return result
    
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        temp = [int(x) for x in input().split()]
        N, L, R = temp[0], temp[1], temp[2]
        arr = [int(x) for x in input().split()]
        print(subarrayCount(N, L, R, arr))