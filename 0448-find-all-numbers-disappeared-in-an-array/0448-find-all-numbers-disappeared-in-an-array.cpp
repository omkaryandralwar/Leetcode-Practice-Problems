class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<int> ans;
        vector<int> freq(nums.size()+1, 0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]] = 1;
        }
        for(int i=1;i<=nums.size();i++){
            if(freq[i]==0) ans.push_back(i);
        }
        return ans;
    }
};