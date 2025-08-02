class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries,
                                     int x) {
        unordered_map<int, int> mp;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x) {
                cnt++;
                mp[cnt] = i;
            }
        }
        vector<int> ans;
        for (int j = 0; j < queries.size(); j++) {
            if (mp.find(queries[j]) != mp.end()) {
                ans.push_back(mp[queries[j]]);
            } else {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};