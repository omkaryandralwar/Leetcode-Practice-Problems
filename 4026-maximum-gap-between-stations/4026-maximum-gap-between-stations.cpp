class Solution {
public:
    int maximumGap(string skill, string station) {
        int ans=0;
        int j=0;
        int k=skill.size()-1;
        vector<int> first;
        vector<int> last;
        for(int i=0;i<station.size();i++){
            if(j < skill.size() && skill[j]==station[i]){
                first.push_back(i);
                j++;
            }
            if(k >= 0 && skill[k]==station[station.size()-1-i]){
                last.push_back(station.size()-1-i);
                k--;
            }
        }
        for(int i=1;i<last.size();i++){
            int temp=last[last.size()-1-i]-first[i-1];
            ans=max(ans, temp);
        }
        return ans;
    }
};