class Solution {
public:
    int result = INT_MAX; // Initialize with INT_MAX (not INT_MIN) to find the minimum unfairness
    int n; 

    void solve(int idx, vector<int>& cookies, vector<int>& child, int k) {
        if (idx >= n) {
            int maxi = *max_element(begin(child), end(child));
            result = min(result, maxi);
            return;
        }

        int cooki = cookies[idx]; // Corrected scope

        for (int i = 0; i < k; i++) {
            child[i] += cooki; // Assign cookies to child[i]
            solve(idx + 1, cookies, child, k);
            child[i] -= cooki; // Backtrack
        }
    }

    int distributeCookies(vector<int>& cookies, int k) {
        n = cookies.size();
        vector<int> child(k, 0); // Create `k` children, not `n`
        solve(0, cookies, child, k);
        return result;
    }
};

