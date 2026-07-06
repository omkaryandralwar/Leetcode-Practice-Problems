class Solution {
public:
    string removeOuterParentheses(string s) {
        if(s.size()<=1) return "";
        string ans;
        vector<int> idx;
        stack<char> temp;
        for(int i=0;i<s.size();i++){
            temp.push(s[i]);
            if(temp.top()==')'){
                temp.pop();
                temp.pop();
            }
            if(temp.empty()) idx.push_back(i);     
        }
        int j=0;
        for(int i=1;i<s.size();i++){
            if (j < idx.size() && idx[j] == i) {
                continue;
            }
            if(j < idx.size() && idx[j]==i-1){
                j++;
                continue;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};