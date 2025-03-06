class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int size = n * n;
        vector<int> counter(size + 1, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                counter[grid[i][j]]++;
            }
        }
        int a = -1 ;
        int b = -1 ;
        for (int i = 1; i <= size; i++) {
            if (counter[i] == 2) {
                a = i ; 
            } else if (counter[i] == 0) {
                b = i ; 
            }
        }
        return {a,b} ; 
    }
};