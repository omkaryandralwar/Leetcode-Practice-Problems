class Solution {
public:
    int largestInteger(int n, int s) {
        if (s > 9*n) return -1;
        if (s == 0) return 0;
        string result = "";
        for(int i=0;i<n;i++){
            int digit = min(9, s);
            result += ('0'+digit);
            s-=digit;
        }
        return stoi(result);
    }
};