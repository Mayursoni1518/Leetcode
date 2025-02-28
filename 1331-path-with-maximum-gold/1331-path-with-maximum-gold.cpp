class Solution {
public:
    vector<vector<int>> directions{{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    int maxGold = 0;
    int DFS(vector<vector<int>>& grid, int i, int j, int m, int n) {
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0) {
            return 0;
        }
        int currentGold = grid[i][j];
        grid[i][j] = 0;
        int maxGold = 0;
        for (auto& dir : directions) {
            int new_i = i + dir[0];
            int new_j = j + dir[1];

            maxGold = max(maxGold, DFS(grid, new_i, new_j, m, n));
        }
        grid[i][j] = currentGold;
        return maxGold + currentGold ;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] != 0) {
                    maxGold = max(maxGold, DFS(grid, i, j, m, n));
                }
            }
        }
        return maxGold;
    }
};