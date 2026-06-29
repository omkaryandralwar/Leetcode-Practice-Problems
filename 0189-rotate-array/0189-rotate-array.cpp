class Solution {
public:
    void reverse(vector<int>& nums, int start, int end){
        while(end>start){
            swap(nums[start],nums[end]);
            end--;
            start++;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==0) return;
        k=k%nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
    }
};