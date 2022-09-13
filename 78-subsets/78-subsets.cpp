class Solution {
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans) {
        // base case
        if(index >= nums.size()) {
            ans.push_back(output);
            return;
        }
        
        //exclude case (increamenting index value only)
        solve(nums, output, index+1, ans);
        
        //include case(Storing element in output array)
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index+1, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output; // storing include element;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
        
    }
};