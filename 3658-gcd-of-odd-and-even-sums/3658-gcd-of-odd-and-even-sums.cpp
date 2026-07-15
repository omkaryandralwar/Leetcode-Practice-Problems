class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n<=1) return n;
        int sumOdd=0;
        int oddn=1;
        int sumEven=0;
        int evenn=2;
        for(int i=0;i<n;i++){
            sumOdd+=oddn;
            sumEven+=evenn;
            oddn+=2;
            evenn+=2;
        }
        stack<int> even;
        stack<int> odd;
        for(int i=1;i<=sumOdd;i++){
            if(sumOdd%i == 0) odd.push(i);
            if(sumEven%i == 0) even.push(i);
        }
        int ans;
        while(!odd.empty() && !even.empty()){
            if(odd.top()==even.top()){
                ans = even.top();
                break;
            }else if(odd.top()<even.top()){
                even.pop();
            }else if(odd.top()>even.top()){
                odd.pop();
            }
        }
        return ans;
    }
};