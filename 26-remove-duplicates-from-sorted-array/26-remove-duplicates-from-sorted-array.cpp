class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>a(nums.begin(),nums.end()); //use sets which lets us save only one element of same signature
nums.assign(a.begin(),a.end()); //assign the values of set a to nums array
int len=nums.size();
return len;
    }
};