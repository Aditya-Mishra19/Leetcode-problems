class Solution {
private:
    int getPivot(vector<int>& nums){
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end-start)/2;
        while(start < end){
            if(nums[mid] >= nums[0])
                start = mid + 1;
            else
                end = mid;
            mid = start + (end-start)/2;
        }
        return start;
    }
public:
    int findMin(vector<int>& nums) {
        int pivot = getPivot(nums);
        if(nums[pivot] > nums[0] || nums[pivot] > nums[nums.size()-1])
            return min(nums[0], nums[nums.size()-1]);
        return nums[pivot];
    }
};