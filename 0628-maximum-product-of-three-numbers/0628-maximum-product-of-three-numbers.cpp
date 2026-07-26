class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[nums.size()-1]<0) return nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        else if(nums[0]<0 && nums[1]<0){
            return max(nums[0]*nums[1]*nums[nums.size()-1], nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3]);
        }else{
            return nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        }
    }
};