class Solution {
public:
    int maxProduct(int n) {
        if(n/100==0) return (n%10)*(n/10);
        vector<int> temp;
        while(n>0){
             temp.push_back(n%10);
             n/=10;
        }
        sort(temp.begin(), temp.end());
        return temp[temp.size()-2]*temp[temp.size()-1];
    }
};