class Solution {
public:
    long long minimumCost(vector<int>& nums, int k) {
        
        long long MOD = 1e9 + 7;
        long long ans = 0;
        long long resources = k;
        for(int i=0;i<nums.size();i++){
            resources -= nums[i];
        }
        if(resources < 0){
            long long resource = llabs(resources);
            long long a = resource / k;
            
            long long x, y;
            if(resource % k != 0){
                x = a + 1;
                y = a + 2;
            } else{
                x = a;
                y = a + 1;
            }
            if(x % 2 == 0) x /= 2;
            else y /= 2;
            
            ans = ((x % MOD) * (y % MOD)) % MOD;
        }
        return ans;
    }
};