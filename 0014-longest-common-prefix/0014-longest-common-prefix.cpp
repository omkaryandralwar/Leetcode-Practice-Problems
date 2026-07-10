class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        if(strs.size()==1) return strs[0];
        sort(strs.begin(), strs.end());
        string ans ="";
        for(int i=0;i<strs[0].size();i++){
            if(strs[0][i]==strs[strs.size()-1][i]) ans.push_back(strs[0][i]);
            else break;
        }
        return ans;
    }
};