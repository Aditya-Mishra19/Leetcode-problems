class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        min_diff = float("inf")
        for i in range(len(nums) -1 ):
            l = i+1
            r = len(nums) - 1
            while l < r:
                diff = target - (nums[i] + nums[l] + nums[r])
                
                if diff == 0:
                    return target
                
                elif abs(diff) < abs(min_diff):
                    min_diff = diff
                    
                if diff > 0:
                    l += 1
                else:
                    r -= 1
        return target - min_diff