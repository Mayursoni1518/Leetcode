class Solution {
public:
   bool findRotation(vector<vector<int>>& matrix, vector<vector<int>>& target) {
    int n = matrix.size();
    int org = 4;  // 0, 90, 180, 270 = 4 rotations possible

    while (org--) {
        if (matrix == target) return true;

        // Transpose
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse each row
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }

    return false;
}
};
