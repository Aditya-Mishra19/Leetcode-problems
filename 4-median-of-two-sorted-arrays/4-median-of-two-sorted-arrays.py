class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        A,B = nums1,nums2
        total = len(A)+len(B)
        half = total//2
        if len(A) > len(B):
            A,B = B,A
        l,r, = 0,len(A)-1
        while True:
            m = (l+r)//2 #A
            i = half - m - 2 #B
            A_left = A[m] if m >= 0 else float("-inf")
            A_right = A[m+1] if m+1 <len(A) else float("inf")
            B_left = B[i] if i >= 0  else float("-inf")
            B_right = B[i+1] if i+1<len(B) else float("inf")
            if A_left <= B_right and B_left<=A_right:
                if total%2:
                    return min(A_right,B_right)
                return float((min(A_right,B_right)+max(A_left,B_left)))/2
            elif A_left > B_right:
                r= m -1
            else:
                l = m+1