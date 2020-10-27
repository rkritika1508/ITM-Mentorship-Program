 class Solution:
    def firstMissingPositive(self, A):
        A.sort()
        counter=0
        t=1
        for i in range(len(A)):
            if A[i]>0 and i<len(A)-1:
                if t:
                    counter=counter+1
                if counter==1:
                    t=0
                    counter=0
                    if A[i]!=1:
                        return 1
                
                if A[i+1]-A[i]!=1 and A[i]!=A[i+1]:
                    return A[i]+1
        if i!=0:
            return A[i]+1
            
        if A[i]!=1:
            return 1
        else:
            return 2
