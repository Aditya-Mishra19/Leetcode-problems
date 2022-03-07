class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        ans = nums[0]
        l, r = 1, 1

        for i in range(len(nums)):
            j = -1-i

            l *= nums[i]
            r *= nums[j]
            ans = max(ans, l, r)

            if l == 0:
                l = 1
            if r == 0:
                r = 1

        return ans