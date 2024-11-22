class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k == 1) return 0; // If k == 1, the difference is always 0
        
        sort(nums.begin(), nums.end()); // Sort the array to make finding ranges easier
        int n = nums.size();
        int minDiff = INT_MAX;

        // Sliding window to find the minimum difference
        for (int i = 0; i <= n - k; i++) {
            int diff = nums[i + k - 1] - nums[i]; // Difference between the largest and smallest in the current window
            minDiff = min(minDiff, diff);
        }

        return minDiff;
    }
};
