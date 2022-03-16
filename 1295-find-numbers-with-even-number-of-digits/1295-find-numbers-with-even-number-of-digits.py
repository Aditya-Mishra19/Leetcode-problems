class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        length = len(nums)
        cnt = 0
        for i in range(length):
            ele = str(nums[i])
            eleLen = len(ele)
            if eleLen %2 == 0:
                cnt += 1
        return cnt