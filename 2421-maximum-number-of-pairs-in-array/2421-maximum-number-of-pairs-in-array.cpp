class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> mapp;  // Map to count frequency of each number

        // Count frequency of each number
        for (auto i : nums) {
            mapp[i]++;
        }

        int count = 0;   // To count the number of pairs
        int second = 0;  // To count leftover elements

        // Iterate over the map to calculate pairs and leftovers
        for (auto ch : mapp) {
            count += ch.second / 2;       // Pairs can be formed by dividing the frequency by 2
            second += ch.second % 2;     // Leftover is the remainder when divided by 2
        }

        return {count, second};
    }
};
