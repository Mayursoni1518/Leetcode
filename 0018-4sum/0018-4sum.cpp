class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin() , nums.end()) ;
        vector<vector<int>> result;
        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                for (int k = j + 1; k < n - 1; k++) {
                    if (k > j + 1 && nums[k] == nums[k - 1]) {
                        continue;
                    }
                    for (int r = k + 1; r < n; r++) {
                        if (r > k + 1 && nums[r] == nums[r - 1]) {
                            continue;
                        }
                        long value = (long)nums[i] + nums[j] + nums[k] + nums[r]; 
                        if (value == target) {
                            vector<int> rr = {nums[i], nums[j], nums[k],nums[r]};
                            result.push_back(rr) ; 
                        }
                    }
                }
            }
        }
        return result;
    }
};