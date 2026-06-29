class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s= to_string(num);
        if(s.size()<k) return 0;
        int i=0;
        int n=0;
        while(i+k<=s.size()){
            string s2;
            for(int j=0;j<k;j++){
                s2.push_back(s[i+j]);
            }
            i++;
            if(stoi(s2)==0) continue;
            if( num % stoi(s2)==0){
                n++;
            }
           
        }
        return n;
    }
};