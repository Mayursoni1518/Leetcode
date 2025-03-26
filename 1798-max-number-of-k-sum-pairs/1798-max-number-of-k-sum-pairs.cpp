class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int st = 0, end = nums.size() - 1;
        int ans = 0;

        while (st < end) {
            int sum = nums[st] + nums[end];
            if (sum == k) {
                ans++;
                st++;
                end--;
            } else if (sum < k) {
                st++;
            } else {
                end--;
            }
        }
        return ans;
    }
};
