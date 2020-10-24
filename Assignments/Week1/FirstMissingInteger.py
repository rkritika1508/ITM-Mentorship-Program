class Solution:
    def firstMissingPositive(self, A):
        hashmap=[0]*len(A)
        
        for i in range(len(A)):
            if A[i]==0:
                return i+1
        return i+2    