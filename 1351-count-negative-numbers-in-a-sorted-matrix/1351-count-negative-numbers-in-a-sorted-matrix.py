class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        rows = len(grid)
        columns = len(grid[0])
        
        negativeNumbers = 0
        
        i, j = rows - 1, 0
        
        while i >= 0 and j < columns:
            if grid[i][j] < 0:
                negativeNumbers += (columns - j)
                i -= 1
            else:
                j += 1
        return negativeNumbers