class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n = nums.size() ;
        int m = nums[0].size() ;
        int ans = 0 ; 
        for(int i = 0; i < nums.size(); ++i){
            sort(nums[i].begin(), nums[i].end());
        }

        for(int col = 0 ; col < m; col++){
            int maxi = 0 ;

            for(int row = 0 ; row < n ; row++){
                maxi = max(maxi , nums[row][col]) ;
            }
            ans += maxi ; 
        }
        return ans ; 
    }
};