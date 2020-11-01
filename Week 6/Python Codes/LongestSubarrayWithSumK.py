def longestSubarray(arr, n, k): 
    # dictionary hash used as hash table 
    hash = {}
    sum, maxLen = 0, 0
  
    for i in range(n):
        sum += arr[i] 
  
        # when subarray starts from index '0' 
        if (sum == k): 
            maxLen = i+1 
  
        # make an entry for 'sum' if it is not present in hash 
        if sum not in hash: 
            hash[sum] = i 
  
        # check if 'sum-k' is present in hash or not 
        if (sum-k) in hash:
            # update maxLength 
            if (maxLen < (i - hash[sum - k])): 
                maxLen = i - hash[sum - k]
    return maxLen

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        temp = [int(x) for x in input().split()]
        n, k = temp[0], temp[1]
        arr = [int(x) for x in input().split()]
        print(longestSubarray(arr, n, k))