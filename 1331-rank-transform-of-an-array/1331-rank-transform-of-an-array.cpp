class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.empty()) return arr;
        if(arr.size()==1) return {1};
        unordered_map<int, int> m;
        vector<int> num = arr;
        sort(num.begin(), num.end());
        int j =1;
        for(int i=0;i<num.size()-1;i++){
            if(num[i+1]==num[i]){
                m[num[i]] = j;
            }else{
                m[num[i]] = j;
                j++;
            }
        }
        m[num[num.size()-1]]=j;
        for(int i=0;i<num.size();i++){
            arr[i]=m[arr[i]];
        }
        return arr;
    }
};