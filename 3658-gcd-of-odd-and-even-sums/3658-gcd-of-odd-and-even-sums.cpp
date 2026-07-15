class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n<=1) return n;
        int sumOdd=(n*(2+(n-1)*2))/2;
        int sumEven=(n*(4+(n-1)*2))/2;
        stack<int> even;
        stack<int> odd;
        for(int i=1;i<=sumOdd/2;i++){
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