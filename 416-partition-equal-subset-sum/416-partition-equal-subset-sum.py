class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        totalSum = sum(nums)
        if totalSum%2==1:
            return False
        target = totalSum/2
        dp = {}
        def backTrack(i,currentSum = 0):
            if (i,currentSum) in dp:
                return dp[(i,currentSum)]
            if currentSum > target:
                dp[(i,currentSum)] = False
                return dp[(i,currentSum)]
            elif currentSum == target:
                dp[(i,currentSum)] = True
                return dp[(i,currentSum)]
            else:
                for j in range(i+1,len(nums)):
                    if backTrack(j,currentSum + nums[i]):
                        dp[(i,currentSum)] = True
                        return dp[(i,currentSum)]
            dp[(i,currentSum)] = False
            return dp[(i,currentSum)]
        
        for i in range(len(nums)):
            if backTrack(i):
                return True
        return False