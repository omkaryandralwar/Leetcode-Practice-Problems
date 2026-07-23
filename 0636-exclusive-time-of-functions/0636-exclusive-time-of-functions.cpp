#include <sstream>
class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        if(n==0) return {};
        vector<int> ans(n, 0);
        stack<int> IDs;
        int idx;
        for(int i=0;i<logs.size();i++){
            stringstream ss(logs[i]);
            string idStr, sig, tStr;
            getline(ss, idStr, ':');
            getline(ss, sig, ':');
            getline(ss, tStr, ':');
            int id = stoi(idStr);
            int t = stoi(tStr);
            if(IDs.empty()){
                idx = t;
                IDs.push(id);
            }else{
                if(sig=="start"){
                    ans[IDs.top()] += t-idx;
                    idx=t;
                    IDs.push(id);
                }else{
                    ans[IDs.top()] += t-idx+1;
                    idx=t+1;
                    IDs.pop();  
                }
            }
        }
        return ans;
    }
};