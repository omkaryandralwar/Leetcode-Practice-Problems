class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        int k=1;
        int m=1;
        for(int i=0;i<s.size();i++){
            bool cond = false;
            for(int j=i+1;j<s.size() && cond!=true;j++){
                for(int a=i;a<j;a++){
                    if(s[j]==s[a]){
                        cond = true;
                        break;
                    }else k++;
                }
            m = max(m,k);
            k=1;
            }
        }
        return m;
    }
};