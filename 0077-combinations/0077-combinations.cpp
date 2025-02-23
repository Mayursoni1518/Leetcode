class Solution {
public:
    void solve(int st, int n, vector<int>& temp, int k, vector<vector<int>>& result) {
        if (k == 0) { // Base case: if k elements are chosen
            result.push_back(temp);
            return;
        }

        if (st > n) return; // Stop recursion if we go beyond n

        // Include the current number
        temp.push_back(st);
        solve(st + 1, n, temp, k - 1, result);

        // Exclude the current number and move to the next
        temp.pop_back();
        solve(st + 1, n, temp, k, result);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result; // Declare result locally to avoid unintended side effects
        vector<int> temp;
        solve(1, n, temp, k, result);
        return result;
    }
};
