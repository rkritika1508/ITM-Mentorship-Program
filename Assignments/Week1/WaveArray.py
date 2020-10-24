class Solution:
    def wave(self, A):
        A.sort()
        i=0
        while(i<len(A)):
            if i+1<len(A):
                temp=A[i]
                A[i]=A[i+1]
                A[i+1]=temp
            i=i+2
        return A
        