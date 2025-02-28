class Solution {
public:
    void solve(string &s, unordered_set<string> &st, int idx, int &maxCount, int currCount) {
        if (idx == s.size()) {
            maxCount = max(maxCount, currCount);
            return; // Base case return
        }

        for (int j = idx; j < s.size(); j++) {  // Fixed semicolon issue
            string sub = s.substr(idx, j - idx + 1);
            if (st.find(sub) == st.end()) { // Only proceed if the substring is unique
                st.insert(sub);
                solve(s, st, j + 1, maxCount, currCount + 1); // Use j + 1 instead of idx + 1
                st.erase(sub); // Backtrack
            }
        }
    }

    int maxUniqueSplit(string s) {
        unordered_set<string> st;
        int maxCount = 0;
        solve(s, st, 0, maxCount, 0); // Start with currCount = 0
        return maxCount;
    }
};
