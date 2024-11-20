class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        int ans ; 
        for(int i = 0 ;  i < nums.size() ; i++){
            if(nums[i] == i ) {
                continue ;
            }
            else{
                ans = i  ;
                return ans; 
            }
        }
        return nums.size() ; 
        
    }
};

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int ans =0;
//         for(int i =1;i<=n;i++){
//             ans = ans ^ i;
//         }
//         for(int i =0;i<nums.size();i++){
//             ans= ans^nums[i];
//         }
//         return ans;
//     }
// };

