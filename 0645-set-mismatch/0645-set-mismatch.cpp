class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums){
        if(nums.size()<2) return {};
        vector<int> freq(nums.size()+1, 0);
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]]==1) ans.push_back(nums[i]);
            freq[nums[i]]=1;
        }
        for(int i=1;i<=nums.size();i++){
            if(freq[i]==0) ans.push_back(i);
        }
        return ans;
    }
};