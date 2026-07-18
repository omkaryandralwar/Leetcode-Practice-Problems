// class Solution {
// public:
//     vector<int> mergeSort(vector<int>& nums, int start, int end){
//         if(start>end) return{};
//         if(start==end) return {nums[start]};
//         int mid=start+(end-start)/2;
//         vector<int> firstHalf = mergeSort(nums, start, mid);
//         vector<int> secondHalf = mergeSort(nums, mid+1, end);
//         vector<int> ans;
//         int j=0;
//         int i=0;
//         while(i<firstHalf.size() && j<secondHalf.size()){
//             if(firstHalf[i]<secondHalf[j]){
//                 ans.push_back(firstHalf[i]);
//                 i++;
//             }else{
//                 ans.push_back(secondHalf[j]);
//                 j++;
//             }
//         }
//         while(i<firstHalf.size()){
//             ans.push_back(firstHalf[i]);
//             i++;
//         }
//         while(j<secondHalf.size()){
//             ans.push_back(secondHalf[j]);
//             j++;  
//         }
//         return ans;
//     }

//     int findGCD(vector<int>& nums) {
//         nums = mergeSort(nums, 0, nums.size()-1);
//         int b=nums[0];
//         int a=nums[nums.size()-1];
//         while(b){
//             a=a%b;
//             swap(a,b);
//         }
//         return a;
//     }
// };

class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return gcd(nums[0], nums[nums.size()-1]);
    }
};