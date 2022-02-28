class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        n = len(arr)
        max_element = arr[n-1]
        arr[n-1] = -1 
        for i in range(n-2, -1, -1):
            temp = arr[i]
            arr[i] = max_element
            if max_element < temp:
                max_element = temp
        return arr    