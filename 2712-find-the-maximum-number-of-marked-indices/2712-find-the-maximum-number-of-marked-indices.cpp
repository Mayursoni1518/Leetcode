class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Sort the array first
        int n = nums.size();
        int i = 0;
        int j = n / 2;
        int ans = 0;

        // Use two pointers to match small and large elements
        while (i < n / 2 && j < n) {
            if (nums[i] * 2 <= nums[j]) {
                ans += 2;  // Each valid pair marks two indices
                i++;
                j++;
            } else {
                j++;
            }
        }
        return ans;
    }
};
