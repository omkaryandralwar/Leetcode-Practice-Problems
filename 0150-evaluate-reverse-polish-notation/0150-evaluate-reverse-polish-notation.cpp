class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        if(tokens.size()==1) return stoi(tokens[0]);
        int ans;
        stack<int> temp;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int b = temp.top();
                temp.pop();
                int a = temp.top();
                temp.pop();
                char c = tokens[i][0];
                switch(c){
                    case '+': ans = a + b; break;
                    case '-': ans = a - b; break;
                    case '*': ans = a * b; break;
                    case '/': ans = a / b; break;
                }
                temp.push(ans);
            }else{
                temp.push(stoi(tokens[i]));
            }
        }
        return ans;
    }
};