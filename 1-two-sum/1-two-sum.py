class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        out = {}
        for i in range(len(nums)):
            diff = target - nums[i]
            if diff in out:
                return [i,out[diff]]
            out[nums[i]] = i