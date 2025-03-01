class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapp;
        vector<vector<string>> ans;
        for (auto  word : strs) {
            string sorted = word;

            sort(sorted.begin(), sorted.end());
            mapp[sorted].push_back(word);
        }

        for (auto& entry : mapp) {
            ans.push_back(entry.second);
        }
        return ans;
    }
};