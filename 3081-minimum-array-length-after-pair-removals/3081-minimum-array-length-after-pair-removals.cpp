class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int n = nums.size();
        int mid = (n + 1) / 2;
        int i = 0, j = mid;
        int pairs = 0;

        while (i < mid && j < n) {
            if (nums[i] < nums[j]) {
                pairs++;
                i++;
            }
            j++; 
        }

        return n - pairs * 2;
    }
};
