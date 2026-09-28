class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> rs(heights.size(), heights.size());
        vector<int> ls(heights.size(), -1);
        stack<int> rst;
        stack<int> lst;
        int ans=0;
        for(int i=0;i<heights.size();i++){
            while(!rst.empty() && heights[rst.top()]>heights[i]){
                rs[rst.top()]=i;
                rst.pop();
            }
            while(!lst.empty() && heights[lst.top()]>heights[heights.size()-1-i]){
                ls[lst.top()]=heights.size()-1-i;
                lst.pop();
            }
            lst.push(heights.size()-1-i);
            rst.push(i);
        }
        for(int i=0;i<heights.size();i++){
            ans=max(ans, (heights[i]*(rs[i]-ls[i]-1)));
        }
        return ans;
    }
};