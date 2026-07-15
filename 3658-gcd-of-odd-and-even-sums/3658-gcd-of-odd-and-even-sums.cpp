class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n<=1) return n;
        int b=(n*(2+(n-1)*2))/2;
        int a=(n*(4+(n-1)*2))/2;
        while(b){
           a = a%b;
           swap(a, b) ;
        }
        return a;
    }
};