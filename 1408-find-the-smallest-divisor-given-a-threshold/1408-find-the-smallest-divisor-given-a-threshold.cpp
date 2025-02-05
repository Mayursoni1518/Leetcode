class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());
        int result = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int ans = 0;
            for (auto pile : nums) {
                ans += (pile + mid - 1) / mid;
            }
            if (ans <= threshold) {
                right = mid - 1; 
            } else {
                left = mid + 1;
            }
        }
        return left ; 
    }
};
