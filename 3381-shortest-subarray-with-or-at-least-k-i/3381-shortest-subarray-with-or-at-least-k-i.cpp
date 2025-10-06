class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int curr_or = 0;
        int i = 0;
        int mini = INT_MAX; 
        int j = 0;
        while (j < n) {
            curr_or |= nums[j];
            while (curr_or >= k && i <= j) {
                mini = min(mini, j -i + 1 );

                curr_or = 0 ;
                for(int x = i + 1 ; x <= j && x < n ; x++ ) {
                    curr_or |= nums[x] ; 
                }
                i++ ; 
            }
            j++ ; 
        }
        return mini == INT_MAX ? -1 : mini ; 
    }
};