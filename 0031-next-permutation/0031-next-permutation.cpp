class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1 || nums.size()==0) return;
        int n=nums.size();
        int i=n-2;
        while(i>=0 && nums[i]>=nums[i+1]){
            i--;
        }
        if(i>=0){
            int j=n-1;
            while(j>=0 && nums[j] <=nums[i]){
                j--;
            }
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin()+1+i, nums.end());
        return;
    }
};