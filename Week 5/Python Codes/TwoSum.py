class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        array = nums
        # create a dictionary to store array elements and their indexes       
        for i in range(len(nums)):
            array[i] = (array[i], i)
        
        left, right = 0, len(array)-1

        array.sort() #sorting the nums array

        while(left < right):
            temp_sum = array[left][0] + array[right][0]
            if (temp_sum == target): #if temp_sum equals target, store the indexes in result
                return min((array[left][1], array[right][1]), (array[right][1], array[left][1]))
            elif (temp_sum > target): #decrease the right pointer and point to smaller number
                right -= 1
            else: #increase the left pointer and point to bigger number
                left += 1
        