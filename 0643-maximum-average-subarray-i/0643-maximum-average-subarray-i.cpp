class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        int right = k - 1;
        double sum = 0;
        double maxi = INT_MIN;

        for (int i = left; i <= right; i++) {
            sum += nums[i];
        }

        double window = sum / k;
        maxi = window;  // Initialize maxi with the first window average
        right++;

        while (right < nums.size()) {
            int newJ = nums[right];
            int oldJ = nums[left];

            sum = sum + newJ - oldJ;  // Update sum for the new window
            window = sum / k;  // Compute new window average
            maxi = max(maxi, window);  // Update max average

            left++;
            right++;
        }
        return maxi;
    }
};


// this can be write like this => 
// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         double sum = 0;
//         for (int i = 0; i < k; i++) {
//             sum += nums[i];  // Initial sum of the first 'k' elements
//         }
        
//         double maxSum = sum;  // Track the maximum sum

//         for (int right = k; right < nums.size(); right++) {
//             sum += nums[right] - nums[right - k];  // Slide the window
//             maxSum = max(maxSum, sum);
//         }
        
//         return maxSum / k;  // Return the maximum average
//     }
// };
