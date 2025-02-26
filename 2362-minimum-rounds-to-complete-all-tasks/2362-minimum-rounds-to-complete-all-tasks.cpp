class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> mapp;

        // Count occurrences of each difficulty level
        for (auto i : tasks) {
            mapp[i]++;
        }

        int count = 0;

        for (auto &p : mapp) {
            int freq = p.second;

            // If a task appears only once, it's impossible to complete
            if (freq == 1) return -1;

            // Prioritize using groups of 3
            if (freq % 3 == 0) {
                count += freq / 3;
            } else {
                count += freq / 3 + 1; // One additional group of 2
            }
        }

        return count;
    }
};
