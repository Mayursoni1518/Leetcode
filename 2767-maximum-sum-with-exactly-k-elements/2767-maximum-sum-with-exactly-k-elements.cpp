class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
       int m = *max_element(begin(nums) , end(nums)) ;
       return k * m + (k) * (k-1) /2 ; 
    }
};

// class Solution {
// public:
//     int maximizeSum(vector<int>& nums, int k) {
//         int m = nums[0];
//         for(auto i : nums) {
//             if(i > m) m = i;
//         }
//         int ans = 0;
//         for(int i = 0; i < k; i++) {
//             ans += m;
//             m++;
//         }
//         return ans;
//     }
// };