class Solution {
public:
    int countValidPrefixes(string s) {
        int ans=0;
        int count1 = 0;
        int count0 = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') count0++;
            else count1++;
        }
        for(int i=s.size()-1;i>=0;i--){
            if(count0==count1 || count1-count0==1 || count0-count1==1){
                ans++;
            }
            if(s[i]=='0') count0--;
            else count1--;
        }
        return ans;
    }
};