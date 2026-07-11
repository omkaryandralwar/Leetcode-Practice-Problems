class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, vector<int>> S;
        unordered_map<char, vector<int>> T;
        for(int i=0;i<s.size();i++){
            S[s[i]].push_back(i);
            T[t[i]].push_back(i);
        }
        for(int i=0;i<s.size();i++){
            if(S[s[i]]!=T[t[i]]) return false;
        }
        return true;
    }
};