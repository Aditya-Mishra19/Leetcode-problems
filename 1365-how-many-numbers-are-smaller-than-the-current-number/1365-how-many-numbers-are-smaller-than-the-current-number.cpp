class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp = nums;
        map<int,int> mp;
        sort(temp.begin(), temp.end());

        for(int i=n-1; i>=0; i--)
            mp[temp[i]] = i;

        for(int i=0; i<n; i++)
            nums[i] = mp[nums[i]];
        return nums;
//         int n=nums.size();
//         vector<int>temp=nums;
//         map<int,int>mp;
        
//         sort(temp.begin(),temp.end());
        
//         for(int i=n-1;i>=0;i--)
//         {
//             mp[temp[i]]=i;
        
//         }
//         for(int i=0;i<n;i++)
//         {
//             nums[i]=mp[nums[i]];
//         }
        
//         return nums;
        
    }
};