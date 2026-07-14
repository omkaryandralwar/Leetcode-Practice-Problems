class Solution {
public:
vector<int> temp;
    int climbStairs(int n) {
        if(temp.empty()) temp.resize(n+1, -1);
        if(n == 0 || n == 1) return 1;
        if(n < 0) return 0;
        int ans = 0;
        if(temp[n]>=0){
            return temp[n];
        }
        int a=climbStairs(n-1);
        int b=climbStairs(n-2);
        temp[n-1]=a;
        temp[n-2]=b;
        ans+=a;
        ans+=b;
        temp[n]=ans;
        return ans;
    }
};