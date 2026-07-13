class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<int> ans;
        vector<int> temp=nums;
        unordered_map<int, int> data;
        sort(temp.begin(), temp.end());
        int small = 0;
        for(int i=0;i<nums.size();i++){
            if(i!=0 && temp[i]==temp[i-1]){
                data[temp[i]] = data[temp[i-1]];
            }else{
                data[temp[i]] = small;
            }
            small++;
        }
        for(int i=0;i<nums.size();i++){
            ans.push_back(data[nums[i]]);
        }
        return ans;
    }
};