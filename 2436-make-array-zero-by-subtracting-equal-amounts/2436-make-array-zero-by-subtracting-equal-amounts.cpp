class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                ans.insert(nums[i]);
            }
        }
        return ans.size() ; 
    }
};