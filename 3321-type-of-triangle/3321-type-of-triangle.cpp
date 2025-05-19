class Solution {
public:
    string triangleType(vector<int>& nums) {
        unordered_map<int, int> mp;
        sort(nums.begin(), nums.end());
        for (auto& i : nums) {
            mp[i]++;
        }
        if (mp.size() == 1) {
            if (nums[0] + nums[1] > nums[2]) {
                return "equilateral";
            }
        } else if (mp.size() == 2) {
            if (nums[0] + nums[1] > nums[2]) {
                return "isosceles";
            }
        } else if (mp.size() == 3) {
            if (nums[0] + nums[1] > nums[2]) {
                return "scalene";
            }
        }
        return "none";
    }
};