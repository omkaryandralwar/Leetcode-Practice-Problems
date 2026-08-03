class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans(prices.size(), 0);
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[i]>=prices[j]){
                    ans[i]=prices[i]-prices[j];
                    break;
                }
                if(ans[i]==0) ans[i]=prices[i];
            }
        }
        ans[prices.size()-1]=prices[prices.size()-1];
        return ans;
    }
};