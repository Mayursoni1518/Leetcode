class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum = 0 ;
        int ans = 0; 
        int i = 0 ;
        int pre = 0 ; 
        int j = 0 ;
        int n = nums.size() ;
        while(j < n ) {
            sum += nums[j];
            while(i < j && (nums[i] == 0 || sum > goal)) {
                if(nums[i] == 0 ) {
                    pre += 1 ; 
                }
                else{
                    pre = 0; 
                }

                sum -= nums[i] ;
                i++ ; 
            }
            if(sum == goal) {
                ans += 1 + pre ; 
            }
            j++ ; 
        }
        return ans ;
    }
};