class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxi = 0 ;
        for(int i = 0 ; i < nums.size() - 1 ; i++ )
        {
            maxi = max(maxi , abs(nums[i] - nums[i+1])) ; 
        }

        int n = nums.size();
        if((abs(nums[n-1] - nums[0])) > maxi ) {
            maxi = abs(nums[n-1] - nums[0]) ; 
        }
        return maxi ; 
    }
};