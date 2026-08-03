class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans=prices;
        stack<int> st;
        for(int i=0;i<prices.size();i++){
            while(!st.empty() && prices[st.top()]>=prices[i]){
                int j=st.top();
                st.pop();
                ans[j]=prices[j]-prices[i];
            }
            st.push(i);
        }
        return ans;
    }
};