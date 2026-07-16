class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        if(nums.size()<2) return 0; 
        long long ans=0;
        vector<int> prefixGcd(nums.size(), 0);
        int temp;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                temp=nums[i];
                prefixGcd[i]=nums[i];
            }else{
                temp = max(temp, nums[i]);
                prefixGcd[i]=gcd(temp, nums[i]);
            }
        }
        temp = nums.size()-1;
        sort(prefixGcd.begin(), prefixGcd.end());
        for(int i=0;i<nums.size()/2;i++){
            ans+=gcd(prefixGcd[i],prefixGcd[temp-i]);
        }
        return ans;
    }
};