from collections import Counter
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        d = Counter(nums)
        return (min(d, key= d.get))