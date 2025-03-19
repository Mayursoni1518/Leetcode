class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int maxi = *max_element(nums.begin(), nums.end());

        int cnt = 0;
        int n = nums.size();
        long long result = 0;
        while (j < n) {
            if (nums[j] == maxi) {
                cnt++;
            }
            while (cnt >= k) {
                result += n - j;

                if (nums[i] == maxi) {
                    cnt--;
                }
                i++;
            }
            j++;
        }

        return result;
    }
};