class Solution {
public:
    vector<int> temp;
    int helper(vector<int>& nums, int i){
        temp.resize(nums.size()+1, -1);
        if(i < 0) return 0;
        if(i == 0) return nums[0];
        if(temp[i]!=-1){
            return temp[i];
        }
        int robThis = nums[i] + helper(nums, i-2);
        int skipThis = helper(nums, i-1);
        temp[i]=max(robThis, skipThis);
        return max(robThis, skipThis);
    }

    int rob(vector<int>& nums) {
        return helper(nums, nums.size()-1);
    }
};