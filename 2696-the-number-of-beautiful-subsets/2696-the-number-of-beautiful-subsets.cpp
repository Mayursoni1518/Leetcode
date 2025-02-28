class Solution {
public:
    int result = 0;
    void solve(int idx, vector<int>& nums, int k, unordered_map<int, int>& mp) {
        if (idx >= nums.size()) {
            result++;
            return;
        }

        // Not taking the current element
        solve(idx + 1, nums, k, mp); 

        // Taking the current element only if it does not break the "beautiful subset" condition
        if (mp[nums[idx] - k] == 0 && mp[nums[idx] + k] == 0) { 
            mp[nums[idx]]++;  // Include the current element
            solve(idx + 1, nums, k, mp); 
            mp[nums[idx]]--;  // Backtrack
        }
    }

    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        result = 0;
        solve(0, nums, k, mp);
        return result - 1; // Subtracting empty subset (not considered in the problem)
    }
};
