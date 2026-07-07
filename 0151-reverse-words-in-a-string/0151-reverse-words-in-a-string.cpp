class Solution {
public:
    string reverseWords(string s) {
        if(s.empty()) return s;
        stack<string> temp;
        string ans;
        string ex;
        for(int i=0;i<s.size();i++){
            if(s[i] == ' ' && !ex.empty()){
                temp.push(ex);
                ex="";
                continue;
            }else if(s[i]!=' '){
                ex.push_back(s[i]);
            }
        }
        if(!ex.empty()){       
            temp.push(ex);
        }
        while(!temp.empty()){
            ans += temp.top();
            temp.pop();
            if(temp.size()>0) ans += " ";
        }
        return ans;
    }
};