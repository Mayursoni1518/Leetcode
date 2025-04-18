class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int m = potions.size();
        sort(potions.begin(), potions.end());  // Sort for binary search
        vector<int> result;

        for (int spell : spells) {
            int left = 0, right = m - 1, idx = m;

            while (left <= right) {
                int mid = left + (right - left) / 2;
                long long product = 1LL * spell * potions[mid];

                if (product >= success) {
                    idx = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }

            result.push_back(m - idx);
        }

        return result;
    }
};
