class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int count = k % nums.size();
        if(count==0)
            return;
        reverse(nums.begin(), nums.end() - count);
        reverse(nums.end() - count, nums.end());
        reverse(nums.begin(), nums.end());
        return;
    }
};