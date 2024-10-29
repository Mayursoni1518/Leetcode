class Solution {
public:
    int captureForts(vector<int>& forts) {
        int maxCaptured = 0;
        int n = forts.size();

        for (int i = 0; i < n; ++i) {
            if (forts[i] == 1) { // Start from your fort
                int count = 0;
                
                // Move right to find the next `-1` after capturing forts
                for (int j = i + 1; j < n; ++j) {
                    if (forts[j] == -1) { // End capturing when you reach `-1`
                        maxCaptured = max(maxCaptured, count);
                        break;
                    } else if (forts[j] == 0) {
                        count++; // Count enemy forts
                    } else if (forts[j] == 1) { // Another friendly fort
                        break;
                    }
                }

                count = 0; // Reset count for left-side traversal

                // Move left to find the next `-1` after capturing forts
                for (int j = i - 1; j >= 0; --j) {
                    if (forts[j] == -1) { // End capturing when you reach `-1`
                        maxCaptured = max(maxCaptured, count);
                        break;
                    } else if (forts[j] == 0) {
                        count++; // Count enemy forts
                    } else if (forts[j] == 1) { // Another friendly fort
                        break;
                    }
                }
            }
        }

        return maxCaptured;
    }
};
