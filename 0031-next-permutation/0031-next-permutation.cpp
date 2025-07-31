class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int gola_index = -1;

        for (int i = n - 1; i > 0; i--) {
            if (nums[i] > nums[i - 1]) {
                gola_index = i - 1;
                break;
            }
        }
        if (gola_index != -1) {
            int swap_index = gola_index;
            for (int j = n - 1; j >= gola_index + 1; j--) {
                if (nums[j] > nums[gola_index]) {
                    swap_index = j;
                    break;
                }
            }
            swap(nums[gola_index], nums[swap_index]);
        }
        reverse(nums.begin() + gola_index + 1, nums.end());
    }
};
// [1,2,3,4]
// [1,2,4,3]

// [1,3,2]
// []

// [4,2,1,3]
// [4,2,3,1]

// [1,3,1]
// [3,1,1]

// [13,5,1]
// [1,5,13]

// [4,9,2,6]
// [4,9,6,2]

// [5,2,1,3]
// [5,2,3,1]
