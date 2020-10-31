def countTriplet(arr, n):
    arr.sort() # sort the array
    sum_index = len(arr) - 1 # taking sum_index as the last element
    count = 0
    while sum_index >= 0:
        start, end = 0, sum_index-1
        while start < end:
            if arr[end] + arr[start] == arr[sum_index]: # if triplet is present, increase count by 1
                count += 1
                start += 1
                end -= 1
            elif arr[start] + arr[end] < arr[sum_index]: # if sum is less, then increase start by 1
                start += 1
            else:
                end -= 1 # if sum is greater, then, decrease end by 1
        sum_index -= 1
    return count