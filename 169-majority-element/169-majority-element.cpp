class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0;
        map<int,int> mp;
        
        for (int i=0;i<nums.size();i++) {
            mp[nums[i]]++;
            if (mp[nums[i]]>nums.size()/2)
                ans=nums[i];
        }
        
        return ans;
    }
};