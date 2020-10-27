#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int threeSumClosest(vector<int> &A, int B) {
        sort(A.begin(), A.end());

        int bestSum = INT_MAX;
        long long int sum = 0;

        // Fix the smallest number in the three integers
        for (int i = 0; i < A.size() - 2; i++) {
            // Now A[i] is the smallest number in the three integers in the solution
            int left = i + 1, right = A.size() - 1;

            while (left < right) {
                sum = A[i] + A[left] + A[right];
                if (abs(B - sum) < abs(B - bestSum))
                    bestSum = sum;
                if (sum > B)
                    right--;
                else
                    left++;
            }
        }
        
        return bestSum;
    }
};
