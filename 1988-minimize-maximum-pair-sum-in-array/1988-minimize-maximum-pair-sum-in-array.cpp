class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the array first
        int st = 0;
        int end = nums.size() - 1; 
        int maxi = INT_MIN;
        while (st < end) {
            int sum = nums[st] + nums[end]; // Pair smallest and largest
            maxi = max(maxi, sum); // Update the maximum pair sum
            st++;
            end--; 
        }
        return maxi; 
    }
};
