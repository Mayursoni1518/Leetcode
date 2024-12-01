class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
         int total_sum = 0, leftsum = 0;

        // Calculate total sum of the array
        for (int num : nums) {
            total_sum += num;
        }

        // Iterate to find the pivot index
        for (int i = 0; i < nums.size(); i++) {
            if (leftsum == total_sum - leftsum - nums[i]) {
                return i; // Found the pivot index
            }
            leftsum += nums[i]; // Update leftsum for the next iteration
        }

        return -1; // No pivot index found
    }
};