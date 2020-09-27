class Solution:
    def countZeroes(self, arr, n):
        # code here
        count_0 = 0
        for i in range(n):
            if arr[i] == 0:
                return n-i
        return count_0