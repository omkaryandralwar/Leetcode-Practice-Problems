class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int buy=INT_MAX;
        int sell=0;
        for(int i=0;i<prices.size();i++){
            if(buy>prices[i]){
                buy=prices[i];
                sell=prices[i];
            }else if(sell<prices[i]){
                sell=prices[i];
            }
            ans=max(ans, (sell-buy));
        }
        return ans;
    }
};