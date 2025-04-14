class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n = arr.size();
        int count = 0;

        // Fix j in the middle
        for (int j = 1; j < n - 1; ++j) {
            // Count valid i (0 <= i < j)
            vector<int> valid_i;
            for (int i = 0; i < j; ++i) {
                if (abs(arr[i] - arr[j]) <= a) {
                    valid_i.push_back(arr[i]);
                }
            }

            // For each k > j, check arr[k] with arr[j] and arr[i]
            for (int k = j + 1; k < n; ++k) {
                if (abs(arr[j] - arr[k]) <= b) {
                    for (int val : valid_i) {
                        if (abs(val - arr[k]) <= c) {
                            count++;
                        }
                    }
                }
            }
        }

        return count;
    }
};