class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int curr_or = 0;  
        int mini = INT_MAX;
        int n = nums.size();  

        while (j < n) {
            curr_or |= nums[j];  // Expand the window

            while (curr_or >= k && i <= j) {  // Shrink the window when OR is >= k
                mini = min(mini, j - i + 1);

                // Recompute the OR for the new window
                curr_or = 0;
                for (int x = i + 1; x <= j && x < n; x++) {  // Ensure x does not exceed bounds
                    curr_or |= nums[x];
                }

                i++;  
            }

            j++; 
        }

        return mini == INT_MAX ? -1 : mini;  
    }
};