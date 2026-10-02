class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> ans(2);
        for(int i=0;i<nums.size();i++){
            map[target-nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(map.count(nums[i])){
                if(i==map[nums[i]]) continue;
                ans[0]=i;
                ans[1]=map[nums[i]];
                break;
            }
        }
        return ans;
    }
};