class Solution {
public:
    bool check(vector<int>& nums) {
     int n = 0;
     for(int i=0;i<nums.size() - 1;i++){
        if(nums[i]>nums[i+1]){
            n += 1;
        }
        else{
            continue;
        }
     }
     if(nums[0] < nums[nums.size() - 1]){
        n += 1;
     }
     if(n>1){
        return false;
     }else{
        return true;
     }

        
        
    }
};