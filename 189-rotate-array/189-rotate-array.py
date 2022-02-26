class Solution:
    def reverse(self, arr, a, b):
        while a <= b:
            temp = arr[a]
            arr[a] = arr[b]
            arr[b] = temp
            a += 1 
            b -= 1
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        if k > len(nums):
            k = k % len(nums)
        self.reverse(nums, n-k, n-1)
        self.reverse(nums, 0, n-k-1)
        self.reverse(nums, 0, n-1)
        print(nums)