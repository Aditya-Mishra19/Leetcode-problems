class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;

        for(auto it: nums)
        {
            if(it%2==0)
                even.push_back(it);
            else 
                odd.push_back(it);
        }
        vector<int> cp;
        cp.insert(cp.begin(), even.begin(), even.end());
        cp.insert(cp.end(), odd.begin(), odd.end());
        
        return cp;
    }
};