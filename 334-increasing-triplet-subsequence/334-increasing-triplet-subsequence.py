class Solution:
    def increasingTriplet(self, arr: List[int]) -> bool:
        n = len(arr)
        if(n<3):
            return False
        mid,low=-1,-1
        min_index=0
        for i in range(n):
            if(arr[i]<=arr[min_index]):
                min_index=i
            elif(mid==-1):
                low=min_index
                mid=i
            elif(arr[i] <= arr[mid]):
                low=min_index
                mid=i
            else:
                return True
        return False