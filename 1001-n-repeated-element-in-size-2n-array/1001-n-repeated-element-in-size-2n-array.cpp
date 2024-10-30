class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> ans;

        for (int i : nums) {
            ans[i]++;
        }
        for (auto j : ans) {
            if (j.second == (nums.size() / 2)) {
                return j.first;
            }
        }
        return 0;
    }
};