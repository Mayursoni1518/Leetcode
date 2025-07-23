class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            int val = abs(0 - nums[i]);
            if (val < mini) {
                mini = val;
            }
        }
        if (std::find(nums.begin(), nums.end(), mini) != nums.end()) {
            return mini;
        }
        return -mini;
    }
};