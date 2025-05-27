class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (auto& i : nums) {
            mp[i]++;
        }

        for (auto& i : mp) {
            if (i.second == 1) {

                int val = i.first;
                if (mp.find(val - 1) == mp.end() &&
                    mp.find(val + 1) == mp.end()) {
                    ans.push_back(val);
                }
            }
        }
        return ans;
    }
};