def maximumSumSubarray (K, arr, N):
    temp_sum = sum(arr[:K])
    result = temp_sum
    for i in range(K, N):
        temp_sum += arr[i] - arr[i-K]
        result = max(result, temp_sum)
    return result