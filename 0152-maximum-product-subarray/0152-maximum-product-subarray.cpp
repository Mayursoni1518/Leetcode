class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long product = 1;
        long long maxi = nums[0];

        int i = 0, j = 0;
        while (j < nums.size()) {
            product *= nums[j];
            maxi = max(maxi, product);

            if (product == 0) {
                // Reset window
                product = 1;
                j++;
                i = j; // move start of window to next element
            } else {
                j++;
            }
        }

        // Repeat the same from right to left (reverse sliding window)
        product = 1;
        i = j = nums.size() - 1;
        while (j >= 0) {
            product *= nums[j];
            maxi = max(maxi, product);

            if (product == 0) {
                product = 1;
                j--;
                i = j;
            } else {
                j--;
            }
        }

        return (int)maxi;
    }
};