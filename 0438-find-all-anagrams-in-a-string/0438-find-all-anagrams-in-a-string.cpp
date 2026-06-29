class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size()>s.size()) return {};
        if(p.empty() || s.empty()) return {};
        vector<int> freqP(26, 0);
        vector<int> ans;
        for(int i=0;i<p.size();i++){
            freqP[p[i]-'a']++;
        }
        for(int i=0;i<=s.size()-p.size();i++){
            vector<int> freqS(26, 0);
            for(int j=0;j<p.size();j++){
                freqS[s[i+j]-'a']++;
            }
            if(freqP == freqS) ans.push_back(i);
        }
        return ans;
    }
};