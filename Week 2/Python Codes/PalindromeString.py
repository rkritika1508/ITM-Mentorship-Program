import re

class Solution:
    # @param A : string
    # @return an integer
    def isPalindrome(self, A):
        A = re.sub(r'\W+', '', A).lower()
        if A == A[::-1]:
            return 1
        return 0
