class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        if (nums.empty()) return nums;
        vector<int> arr(nums.size());
        int a=0;
        int b=1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                arr[a] = nums[i];
                a = a+2;
            }else{
                arr[b] = nums[i];
                b = b+2;
            }
        }
        return arr;
    }
};