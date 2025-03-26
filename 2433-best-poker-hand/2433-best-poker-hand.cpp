class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        // Check for Flush
        set<char> st(suits.begin(), suits.end());
        if (st.size() == 1) {
            return "Flush";
        }

        // Count frequencies of ranks
        unordered_map<int, int> mp;
        for (auto& i : ranks) {
            mp[i]++;
        }

        int maxFreq = 0;
        for (auto& ch : mp) {
            maxFreq = max(maxFreq, ch.second);
        }

        if (maxFreq >= 3) return "Three of a Kind";
        if (maxFreq == 2) return "Pair";
        return "High Card";
    }
};
