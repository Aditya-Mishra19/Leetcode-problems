from collections import Counter
class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        d = Counter(nums)
        re =[]
        for key, value in d.items():
            if value == 1:
                re.append(key)
        return re
                