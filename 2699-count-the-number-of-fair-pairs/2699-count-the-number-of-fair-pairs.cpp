class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        long long count = 0;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            int x = lower - nums[i];
            int y = upper - nums[i];

            // Use lower_bound and upper_bound in the subarray nums[i+1, n-1]
            auto left = lower_bound(nums.begin() + i + 1, nums.end(), x);
            auto right = upper_bound(nums.begin() + i + 1, nums.end(), y);

            count += (right - left);
        }

        return count;
    }
};