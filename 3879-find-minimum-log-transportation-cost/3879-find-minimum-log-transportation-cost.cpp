class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        if (n == 0 || m == 0 || k == 0) return 0;

        long long ans = 0;

        if (m <= k && n <= k) return 0;

        if (m > k && n <= k) {
            ans += (long long)(m - k) * k;
        }
        if (n > k && m <= k) {
            ans += (long long)(n - k) * k;
        }

        return ans;
    }
};

