class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        start , end = len(nums), 0
        snums = nums[:]
        snums.sort()
        for i in range(len(nums)):
            if snums[i] != nums[i]:
                start = min(start, i)
                end = max(end, i)
        if end - start >= 0:
            return end - start + 1
        else:
            return 0