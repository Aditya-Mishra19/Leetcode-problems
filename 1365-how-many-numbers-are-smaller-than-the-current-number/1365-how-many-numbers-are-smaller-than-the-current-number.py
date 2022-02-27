class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        # Approach 1
        # count = {}
        # for i, v in enumerate(sorted(nums)):
        #     if v not in count:
        #         count[v] = i
        # return [count[v] for v in nums]
        
        # Approach 2
        count = [0]*101
        for val in nums:
            count[val] += 1
        #prefix sum
        for i in range(1,101):
            count[i] += count[i-1]
        
        result= [0]*len(nums)
        for i, v in enumerate(nums):
            if v > 0:
                result[i] = count[v-1]
        return result