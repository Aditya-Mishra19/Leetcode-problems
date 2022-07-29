#include <bits/stdc++.h>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> freq;
        for(int i=0; i<nums.size(); i++)
        {
            freq[nums[i]]++;
        }

        int max = 0;
        int key = 0;
        for(auto it: freq)
        {
            if (max <= it.second)
                max = it.second;
        }
        for(auto it: freq)
        {
            if(max == it.second)
                key = it.first;
        }
        return key;
    }
};