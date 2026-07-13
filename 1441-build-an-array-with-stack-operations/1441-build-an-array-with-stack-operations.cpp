class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        if(target.empty()) return {};
        vector<string> ans;
        int j=0;
        for(int i=1;i<=n;i++){
            if(j>target.size()-1) break;
            if(i==target[j]){
                ans.push_back("Push");
                j++;
            }else{
                if(j>target.size()-1 && target[target.size()-1]!=n){
                    break;
                }else{
                    ans.push_back("Push");
                    ans.push_back("Pop");
                }
            }
        }    
        return ans;
    }
};