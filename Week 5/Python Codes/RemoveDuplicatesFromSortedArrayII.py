class Solution:
    # @param A : list of integers
    # @return an integer
    def removeDuplicates(self, A):
        count, size = 0, len(A)
        for i in range(0, size):
            if (i<size-2 and A[i]==A[i+1] and A[i]==A[i+2]):
                continue
            else:
                A[count] = A[i]
                count += 1
        return count