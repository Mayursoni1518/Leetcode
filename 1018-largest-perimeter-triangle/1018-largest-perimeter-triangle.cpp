class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size() ; 
        long long  ans = 0 ;
        sort(nums.begin() , nums.end());
        for(int i = n - 1; i > 1  ; i--) {
            if(nums[i] < nums[i-1] + nums[i-2]) {
                ans = nums[i] + nums[i-1] + nums[i-2] ;
                break; 
            }
        }
        return ans ; 
    }
};