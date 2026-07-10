class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        if(strs.size()==1) return strs[0];
        string ans="";
        for(int i=1;i<strs.size();i++){
            if(strs[i-1][0]!=strs[i][0]) return "";
            string temp="";
            for(int j=0;j<strs[i].size();j++){
                if(strs[i-1][j]==strs[i][j]){
                    temp.push_back(strs[i][j]);
                }
                else break;
            }
            if(ans.size()>temp.size()){
                ans = temp;
            }
            if(ans=="") ans = temp;
        }
        return ans;
    }
};