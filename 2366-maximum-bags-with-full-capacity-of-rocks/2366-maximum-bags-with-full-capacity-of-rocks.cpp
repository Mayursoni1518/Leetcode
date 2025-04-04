class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = rocks.size();
        vector<int> needed;

        for (int i = 0; i < n; i++) {
            needed.push_back(capacity[i] - rocks[i]);
        }

        sort(needed.begin(), needed.end());

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (needed[i] <= additionalRocks) {
                additionalRocks -= needed[i];
                count++;
            } else {
                break;
            }
        }
        return count;
    }
};
