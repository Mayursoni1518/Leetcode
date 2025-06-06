class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0; i < matrix.size(); i++) {
            int fi = matrix[i][0];
            int sec = matrix[i].back();

            if (target >= fi && target <= sec) {
                
                int low = 0;
                int high = matrix[0].size() - 1;

                while (low <= high) {
                    int mid = low + (high - low) / 2;

                    if (matrix[i][mid] == target) {
                        return true;
                    } else if (matrix[i][mid] > target) {
                        high = mid - 1;
                    } else {
                        low = mid + 1;
                    }
                }
            }
        }
        return false;
    }
};