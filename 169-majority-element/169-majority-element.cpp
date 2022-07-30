class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count, ele, freq, n;
        count = 1;
        ele = 0;
        n = nums.size();
        for(int i=0; i<n; i++)
        {
            if(nums[i] == ele)
                count +=1;
            else
                count -=1;
            if(count == 0)
            {
                ele = nums[i];
                count += 1;
            }
        }
        freq = 0;
        for(int i=0; i<n; i++)
        {
            if(nums[i] == ele)
                freq += 1;
        }
        if(freq > n/2)
            return ele;
        return 0;
    }
};