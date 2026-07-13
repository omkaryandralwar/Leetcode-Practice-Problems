 class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        int temp = low;
        int i=1;
        while(temp>=10){
            temp /= 10;
            i++;
        }
        int p = i; 
        long long add=0;
        while(p>0){
            add = (add*10)+1;
            p--;
        }
        int num = temp;
        while(num<low){
            if(to_string(num).size()==i){
                if(num%10!=9){
                    num += add;
                }else{
                    add = (add*10)+1;
                    int j = to_string(num).size();
                    num = 1;
                    int k = 2;
                    while(num<pow(10,j)){
                        num = (num*10) + k;
                        k++; 
                    }
                    temp = num%10;
                }
            }else{
                if(num%10!=9){
                    ++temp;
                    num = (num*10) + temp;
                }else{
                    add = (add*10)+1;
                    long long j = to_string(num).size();
                    num = 1;
                    long long k = 2;
                    while(num<pow(10,j)){
                        num = (num*10) + k;
                        k++; 
                    }
                    temp = num%10;
                }
            }
        }
        ans.push_back(num);
        while(num<=high){
            if(num%10!=9){
                num += add;
                ans.push_back(num);
            }else{
                add = (add*10)+1;
                string a = to_string(num);
                long long j = a.size();
                num = 1;
                long long k = 2;
                while(num<pow(10,j)){
                    num = (num*10) + k;
                    k++; 
                }
                ans.push_back(num);
            }
        }
        ans.pop_back();
        return ans;       
    }
};