#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) {
        vector<pair<int, int>> array;

        // create a vector to store array elements and their indexes       
        for(int i=0; i<A.size(); i++)
            array.push_back(make_pair(A[i], i));
        
        int left = 0, right = array.size()-1;
        
        vector<int> result; // created a result vector to store the result indexes
        sort(array.begin(), array.end()); // sorting the array vector

        while(left < right) {
            int temp_sum = array[left].first + array[right].first;
            if (temp_sum == target) { // if temp_sum equals target, store the indexes in result
                result.push_back(array[left].second);
                result.push_back(array[right].second);
                break;
            }
            else if (temp_sum > target) // decrease the right pointer and point to smaller number
                right--;
            else // increase the left pointer and point to bigger number
                left++;
        }
        return result;
    }
};