class Solution:
    def transpose(self, mat):
        n = len(mat)
        for row in range(n):
            for col in range(row, n):
                mat[row][col], mat[col][row] = mat[col][row], mat[row][col]
    
    
    def mirror(self, mat):
        n = len(mat)
        for row in range(n):
            for col in range(n // 2):
                mat[row][col], mat[row][n - col - 1] = mat[row][n - col - 1], mat[row][col]
    
    
    def rotate(self, mat):
        self.transpose(mat)
        self.mirror(mat)
    
    
    def findRotation(self, mat: List[List[int]], target: List[List[int]]) -> bool:
        for _ in range(4):
            if mat == target:
                return True
            self.rotate(mat)
        return False
        