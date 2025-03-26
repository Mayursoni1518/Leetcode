class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> st;
        long long sum = 0, maxi = 0;
        int i = 0;

        for (int j = 0; j < nums.size(); ++j) {
            // Remove duplicates and shrink window from left
            while (st.count(nums[j])) {
                st.erase(nums[i]);
                sum -= nums[i];
                i++;
            }

            st.insert(nums[j]);
            sum += nums[j];

            if (j - i + 1 == k) {
                maxi = max(maxi, sum);
                // Shrink window for next iteration
                st.erase(nums[i]);
                sum -= nums[i];
                i++;
            }
        }
        return maxi;
    }
};
