from collections import Counter
class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        d = Counter(nums)
        return (max(d, key = d.get))

        