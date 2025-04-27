class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MAX;
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (nums[i] < nums[j] && (nums[j] > nums[k])) {

                        maxi = min(maxi, nums[i] + nums[j] + nums[k]);
                    }
                }
            }
        }
        return maxi == INT_MAX ? -1 : maxi;
    }
};