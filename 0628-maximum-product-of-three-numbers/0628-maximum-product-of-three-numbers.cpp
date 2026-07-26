class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int firstMax = INT_MIN;
        int secondMax = INT_MIN;
        int thirdMax = INT_MIN;
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(firstMax<=nums[i]){
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = nums[i];
            }else if(secondMax<=nums[i]){
                thirdMax = secondMax;
                secondMax = nums[i];
            }else if(thirdMax<=nums[i]){
                thirdMax = nums[i];
            }
            if(firstMin>=nums[i]){
                secondMin = firstMin;
                firstMin = nums[i];
            }else if(secondMin>=nums[i]){
                secondMin = nums[i];
            }
        }
        int a=firstMax*secondMax*thirdMax;
        int b=firstMax*secondMin*firstMin;
        return max(a,b);
    }
};