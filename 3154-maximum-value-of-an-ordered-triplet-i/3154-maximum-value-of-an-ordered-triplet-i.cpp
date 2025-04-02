// understood the concept -> 
class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans = 0; // Use long long for large values
        int maxiDiff = 0;  // Stores the max (nums[i] - nums[j])
        int maxiNum = 0;   // Stores the max nums[i]

        for (int i = 0; i < nums.size(); i++) {
            ans = max(ans, static_cast<long long>(maxiDiff) * nums[i]); // Compute the triplet value
            maxiDiff = max(maxiDiff, maxiNum - nums[i]); // Update maxiDiff
            maxiNum = max(maxiNum, nums[i]); // Update maxiNum
        }

        return ans;
    }
};
