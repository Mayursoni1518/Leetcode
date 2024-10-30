class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> sums;  // To store unique sums of subarrays
        for (int i = 0; i < nums.size() - 1; i++) { // Loop only till the second-last element
            int sum = nums[i] + nums[i + 1];  // Calculate sum of the consecutive subarray
            if (sums.count(sum)) {  // If sum is already in the set, return true
                return true;
            }
            sums.insert(sum);  // Insert the sum into the set
        }
        return false;  // If no duplicate sum found, return false
    }
};
