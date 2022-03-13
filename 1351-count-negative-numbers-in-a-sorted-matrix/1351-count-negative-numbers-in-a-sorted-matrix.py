class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        negativeNumbers = 0
        length = len(grid)
        for i in range(length):
            for j in grid[i]:
                if j < 0:
                    negativeNumbers += 1 
        return negativeNumbers