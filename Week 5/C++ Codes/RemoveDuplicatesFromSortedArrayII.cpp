#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int> &A) {
        // Do not write main() function.
        // Do not read input, instead use the arguments to the function.
        // Do not print the output, instead return values as specified
        // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
        int count = 0, size = A.size();
        for(auto i=0; i<size; i++) {
            if (i<size-2 && A[i]==A[i+1] && A[i]==A[i+2]) continue;
            else
                A[count++] = A[i];
        }
        return count;
        }
};