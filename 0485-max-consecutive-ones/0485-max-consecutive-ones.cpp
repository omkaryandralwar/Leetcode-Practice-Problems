class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int z=0;
      int i=0;
      for(int j=0;j<nums.size();j++){
        if(nums[j]!=0){
            i++;
        }else{
            z=max(z,i);
            i=0;
        }
      }
      z=max(z,i);
      return z;  
    }
};