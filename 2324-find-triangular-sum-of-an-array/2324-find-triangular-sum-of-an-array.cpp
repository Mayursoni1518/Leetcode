class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        result.push_back(nums);
        for (int i = 1; i < n; i++) {
            vector<int> row(n - i, 0);
            for (int j = 0; j < row.size(); j++) {
                int val = result[i - 1][j] + result[i - 1][j + 1];
                if(val > 10 ) {
                    int temp = val % 10 ; 
                    row[j] = temp ; 
                }
                else{
                    row[j] = val; 
                }
            }
            result.push_back(row);
        }
        
        if(result[n - 1][0] >= 10 ) {
            return result[n - 1][0] % 10 ; 
        }
        
        return result[n - 1][0] ;
    }
};