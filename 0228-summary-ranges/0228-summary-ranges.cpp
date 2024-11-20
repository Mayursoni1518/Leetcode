#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if (nums.empty()) return ans; // Handle edge case where nums is empty

        int start = nums[0]; // Start of the current range

        for (int i = 1; i <= nums.size(); i++) {
            // Check if we're at the end of the range or the array
            if (i == nums.size() || nums[i] != nums[i - 1] + 1) {
                if (start == nums[i - 1]) {
                    // Single number range
                    ans.push_back(to_string(start));
                } else {
                    // Multiple numbers range
                    ans.push_back(to_string(start) + "->" + to_string(nums[i - 1]));
                }

                // Start a new range
                if (i < nums.size()) {
                    start = nums[i];
                }
            }
        }

        return ans;
    }
};
