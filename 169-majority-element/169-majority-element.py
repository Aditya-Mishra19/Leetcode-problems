class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count, ele = 1, 0
        n = len(nums)
        for i in range(n):
            if nums[i] == ele:
                count += 1
            else:
                count -= 1
            if count == 0:
                ele = nums[i]
                count += 1
        freq = 0
        for i in range (n):
            if nums[i] == ele:
                freq += 1
        if freq > n/2:
            return ele
        