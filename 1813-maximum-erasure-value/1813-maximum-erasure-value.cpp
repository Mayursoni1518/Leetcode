class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int maxi = INT_MIN ;
        int sum = 0;
        unordered_map<int, int> mp;
        while (j < n) {
            mp[nums[j]]++;
            while (mp[nums[j]] > 1) {
                mp[nums[i]]--;
                sum -= nums[i];
                i++;
            }
            sum += nums[j];
            maxi = max(maxi, sum);
            j++;
        }
        return maxi;
    }
};
