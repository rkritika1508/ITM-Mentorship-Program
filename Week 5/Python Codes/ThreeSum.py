class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return an integer
    def threeSumClosest(self, A, B):
        A.sort()
        bestSum, sum = float('inf'), 0
        # Fix the smallest number in the three integers
        for i in range(0, len(A)-2):
            # Now A[i] is the smallest number in the three integers in the solution
            left, right = i + 1, len(A) - 1
            while (left < right):
                sum = A[i] + A[left] + A[right]
                if (abs(B - sum) < abs(B - bestSum)):
                    bestSum = sum
                if (sum > B):
                    right -= 1
                else:
                    left += 1
        return bestSum