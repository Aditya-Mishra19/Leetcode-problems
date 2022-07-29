class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n, totalSum, sum, ans;
        n = nums.size();
        totalSum = (n*(n+1)/2);
        sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += nums[i];
        }
        ans = totalSum - sum;
        return ans;
    }
};