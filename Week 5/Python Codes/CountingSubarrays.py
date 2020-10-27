class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return an integer
    def solve(self, A, B):
        count, n = 0, len(A)
      
        for i in range(0, n): 
            sum = 0
            for j in range(i, n): 
                  
                # If sum is less than k 
                # then update sum and  
                # increment count 
                if (sum + A[j] < B): 
                    sum = A[j] + sum
                    count+= 1
                else: 
                    break
        return count
