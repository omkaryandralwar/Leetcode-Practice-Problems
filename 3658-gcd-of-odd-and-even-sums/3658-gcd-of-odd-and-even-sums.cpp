class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n<=1) return n;
        int sumOdd=(n*(2+(n-1)*2))/2;
        int sumEven=(n*(4+(n-1)*2))/2;
        for(int i=sumOdd/2;i>0;i--){
            if(sumOdd%i==0 && sumEven%i==0) return i;
        }
        return 0;
    }
};