class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> history;
        for(int i=0;i<nums.size();i++){
            int temp = target-nums[i];
            if(history.count(temp)) return {history[temp], i};
            else history[nums[i]]=i;
        }
        return {};
    }
};