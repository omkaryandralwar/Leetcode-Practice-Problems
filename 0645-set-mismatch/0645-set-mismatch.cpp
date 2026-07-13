class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int miss;
        int extra;
        for(int i=1;i<=nums.size();i++){
            if(i!=nums.size() && nums[i-1]==nums[i]) extra = nums[i];
            for(int j =0;j<nums.size();j++){
                if(nums[j]==i) break;
                if(j==nums.size()-1 && nums[j]!=i) miss=i;
            }
        }
        return {extra, miss};
    }
};