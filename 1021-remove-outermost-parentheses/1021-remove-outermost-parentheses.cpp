class Solution {
public:
    string removeOuterParentheses(string s) {
        if(s.size()<=1) return "";
        string ans = "";
        int balance = 0;
        for(char c : s){
            if(c == '('){
                if(balance>0) ans += '(';
                balance++; 
            }else{
                balance--;
                if(balance>0) ans+=')';
            }
        }
        return ans;
    }
};