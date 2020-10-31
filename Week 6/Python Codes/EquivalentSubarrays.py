def countDistinctSubarray(arr, n): 
    # Count distinct elements in whole array 
    arr_dict = dict() 
    for i in range(n): 
        arr_dict[arr[i]] = 1

    k = len(arr_dict) 
    subarr_dict = dict() 
    
    # Use sliding window concept to find count of subarrays having k distinct elements. 
    ans, right, window = 0, 0, 0
    
    for left in range(n): 
        while (right < n and window < k): 
            if arr[right] in subarr_dict: 
                subarr_dict[arr[right]] += 1
            else: 
                subarr_dict[arr[right]] = 1
    
            if (subarr_dict[arr[right]] == 1): 
                window += 1
    
            right += 1
            
        # If window size equals to array distinct element size, then update answer 
        if (window == k): 
            ans += (n - right + 1) 
    
        # Decrease the frequency of previous element for next sliding window 
        subarr_dict[arr[left]] -= 1
    
        # If frequency is zero then decrease the window size 
        if (subarr_dict[arr[left]] == 0): 
            window -= 1
    return ans 