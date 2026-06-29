class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size()) return "";
        if(t.empty() || s.empty()) return "";
        
        vector<int> freq(128,0);
        int end=0, begin=0, minWindow=INT_MAX, count,head=0;
        for(char c : t) freq[c]++;
        count = t.size();
        while(end < s.size()){
            if(freq[s[end++]]-->0) count--;
            while(count == 0){
                if(minWindow>end-begin){
                    minWindow = end-begin;
                    head = begin;
                }
                if(freq[s[begin++]]++ == 0) count++;
            }
        }
        
    return (minWindow == INT_MAX) ? "" : s.substr(head, minWindow);
    }
};