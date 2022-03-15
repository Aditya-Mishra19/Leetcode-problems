class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        result = 1 
        nums.sort()
        for i in range(len(nums)):
            if nums[i] == result:
                result += 1
        return result