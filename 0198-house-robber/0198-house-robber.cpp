class Solution {
public:
    vector<int> temp;
    // int helper(vector<int>& nums, int i){
    //     if(i < 0) return 0;
    //     if(i == 0) return nums[0];
    //     // if(temp[i]!=-1){
    //     //     return temp[i];
    //     // }
    //     // int robThis = nums[i] + helper(nums, i-2);
    //     // int skipThis = helper(nums, i-1);
    //     // temp[i]=max(robThis, skipThis);
    //     // return max(robThis, skipThis);
    //     for(int i=2;i<temp.size();i++){
    //         int robThis = nums[i] + temp[i-2];
    //         int skipThis = temp[i-1];
    //         temp[i]=max()
    //     }
    // }

    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        temp.resize(nums.size(), -1);
        temp[0]=nums[0];
        temp[1]=max(nums[0], nums[1]);
        for(int i=2;i<temp.size();i++){
            int robThis = nums[i] + temp[i-2];
            int skipThis = temp[i-1];
            temp[i]=max(robThis, skipThis);
        }
        return temp[temp.size()-1];
    }
};