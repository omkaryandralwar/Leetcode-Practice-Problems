class Solution {
public:
    string largestOddNumber(string& num) {
        int n = num.size()-1;
       for(int i=n;i>=0;i--){
            int temp = num[i]-0;
            if(temp%2==1) break;
            num.pop_back();
       }   
       return num; 
    }
};