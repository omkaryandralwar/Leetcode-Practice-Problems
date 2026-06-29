class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
       sort(nums.begin(), nums.end());
       int i = 1;

       for(int j=1;j<nums.size();j++){
          if(nums[j-1] == nums[j]){
                i++;
                if(i > nums.size()/2){
                    return nums[j-1];
                }
          }else{
          
            i = 1;
          }
       } 
      return 0;
    }
};