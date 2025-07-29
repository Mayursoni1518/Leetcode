class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        long long  first = 0;
        long long  second = 0;
        int index = -1 ; 
        long long mini = LLONG_MAX;
        long long diff = 0;
        long long sum = 0;
        long long  total = accumulate(nums.begin(), nums.end(), 0LL );
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (i == n - 1) {
                diff = total / n;
            } else {
                first = (sum / (i + 1));
                second = (total - sum) / (n - (i + 1));
                diff = abs(first - second);
            }
            if (diff < mini) {
                mini = diff;
                index = i;
            }
        }
        return index;
    }
};