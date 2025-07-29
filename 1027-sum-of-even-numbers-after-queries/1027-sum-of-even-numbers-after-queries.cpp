class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums,
                                    vector<vector<int>>& queries) {
        vector<int> ans;
        int totalEvenSum = 0;

        // Step 1: calculate initial even sum
        for (int num : nums) {
            if (num % 2 == 0) totalEvenSum += num;
        }

        // Step 2: process each query
        for (auto& q : queries) {
            int val = q[0];
            int index = q[1];
            
            if (nums[index] % 2 == 0) {
                totalEvenSum -= nums[index];
            }

            
            nums[index] += val;

          
            if (nums[index] % 2 == 0) {
                totalEvenSum += nums[index];
            }

            ans.push_back(totalEvenSum);
        }

        return ans;
    }
};