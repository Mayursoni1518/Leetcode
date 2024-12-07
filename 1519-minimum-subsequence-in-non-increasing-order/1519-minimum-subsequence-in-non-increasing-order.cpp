class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        // Sort in descending order
        sort(nums.begin(), nums.end(), greater<int>());
        
        int total = 0;
        for (int num : nums) {
            total += num; // Calculate total sum of the array
        }
        
        int sum = 0;
        vector<int> result;
        
        // Add elements to result until sum exceeds total - sum
        for (int num : nums) {
            sum += num;
            result.push_back(num);
            if (sum > total  - sum
            ) {
                break; // Stop when condition is met
            }
        }
        
        return result;
    }
};
