class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        
        // Build prefix sum
        vector<int> prefix(nums.size());
        prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        vector<int> res;

        for (int q = 0; q < queries.size(); q++) {
            int target = queries[q];
            int left = 0, right = nums.size() - 1;
            int ans = 0;

            // Binary Search for upper_bound (first prefix[i] > target)
            while (left <= right) {
                int mid = left + (right - left) / 2;

                if (prefix[mid] <= target) {
                    ans = mid + 1;  // valid subarray size
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }

            res.push_back(ans);
        }

        return res;
    }
};

// in o(n2) 
// class Solution {
// public:
//     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//         sort(nums.begin(), nums.end());
//         vector<int> prefix(nums.size());
//         prefix[0] = nums[0];
//         for (int i = 1; i < nums.size(); i++) {
//             prefix[i] = prefix[i - 1] + nums[i];
//         }
//         int j = 0;
//         vector<int> ans;
//         int n = queries.size();
//         while (j < n) {
//             for (int i = 0; i < nums.size(); i++) {
//                 if (prefix[i] > queries[j]) {
//                     ans.push_back(i);
//                     break;
//                 }
//                 if (i == nums.size() - 1) {
//                     ans.push_back(nums.size());
//                 }
//             }
//             j++;
//         }
//         return ans;
//     }
// };