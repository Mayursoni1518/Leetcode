class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int maxi = -1;
        int i = 0;
        int j = 0;

        while (j < n) {
            if (nums[j] == 0) {
                i = j + 1 ; 
            }
            maxi = max(maxi, j - i + 1);
            j++;
        }
        return maxi ; 
    }
};