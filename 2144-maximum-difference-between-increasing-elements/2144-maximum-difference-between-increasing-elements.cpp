class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size() ;
        int maxi = -1 ; 

        for(int i = 0 ; i < n - 1 ; i++) {
            for(int j = i ; j < n ; j++ ) {
                maxi = max(maxi , nums[j] - nums[i]) ; 
            }
        }
        return maxi == 0 ? -1 : maxi ; 
    }
};