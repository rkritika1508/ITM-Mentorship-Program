#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int solve(vector<int> &A, int B) {
            int start = 0, end = 0, ans=0;
            int n = A.size(), sum = A[0];
            
            while(start<n && end<n) {
                if(sum < B) {
                    end++;
                    ans += end-start;
                    sum += A[end];
                }
                if(sum >= B) {
                    sum -= A[start];
                    start++;
                }
            }
            return ans;
        }
};
