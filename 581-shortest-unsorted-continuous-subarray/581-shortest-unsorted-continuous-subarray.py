class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        stack = []
        start, end = len(nums), 0
        
        # traversing the array from left to right
        for i in range(len(nums)):
            while stack and nums[stack[-1]] > nums[i]:
                start = min(start, stack.pop())
            stack.append(i)
        
        # traversing the array from right to left
        stack = []
        for i in range(len(nums)-1, -1, -1):
            while stack and nums[stack[-1]] < nums[i]:
                end = max(end, stack.pop())
            stack.append(i)
            
        # Corner case when input is already sorted.
        if end - start > 0:
            return end - start + 1
        else:
            return 0
        