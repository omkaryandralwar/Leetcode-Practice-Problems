class Solution {
public:

    void merge(vector<int>& nums, int si, int mid, int ei){
        vector<int> temp;
        int i = si;
        int j = mid+1;
        while(i <= mid && j <= ei){
            if(nums[i] <= nums[j]){
                temp.push_back(nums[i++]);
            }else{
                temp.push_back(nums[j++]);
            }
        }
        while(i<=mid){
            temp.push_back(nums[i++]);
        }
        while(j<=ei){
            temp.push_back(nums[j++]);
        }
        for(int a=si,b=0;a<=ei;a++){
            nums[a] = temp[b++];
        }
    }

    void sort(vector<int>& nums, int si, int ei){
        if(si >= ei) return;
        int mid = si + (ei - si)/2;
        
        sort(nums, si, mid);
        sort(nums, mid+1, ei);
        merge(nums, si, mid, ei);
    }

    void sortColors(vector<int>& nums) {
        sort(nums, 0, nums.size()-1);
    }
};