class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        
        def binarySearch(row):
            low = 0
            high = len(row)
            while low < high:
                mid = low + (high - low)//2
                if row[mid] == 1:
                    low = mid+1
                else:
                    high = mid
            return low
        
        
        counts = [(binarySearch(row), i) for i, row in enumerate(mat)]
        counts.sort()
        return [counts[i][1] for i in range(k)]