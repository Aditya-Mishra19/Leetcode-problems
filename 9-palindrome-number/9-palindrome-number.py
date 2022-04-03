class Solution:
    def isPalindrome(self, x: int) -> bool:
        strX = str(x)                             
        length = len(strX)                    
        for i in range(length // 2):             
            if strX[i] != strX[length - 1 - i]: 
                return False
        return True