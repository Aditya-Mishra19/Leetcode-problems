from collections import Counter
class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        dic = Counter(nums)
        result_list = []
        for key, value in dic.items():
            if value > len(nums) // 3:
                result_list.append(key)
        return result_list