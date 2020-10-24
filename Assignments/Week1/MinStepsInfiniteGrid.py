class Solution:
    def coverPoints(self, A, B):
        summ=0
        for i in range(len(A)-1):
            a=abs(A[i]-A[i+1])
            b=abs(B[i]-B[i+1])
            if a>b:
                summ+=a
            else:
                summ+=b
        return summ
           