class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int>ans(n);
        int cnt = 0 ; 
        ans[0] = nums[0] ;
        for(int i = 1 ; i < n ; i++) {
            ans[i] = ans[i-1] + nums[i] ;
        }
        for(int i = 0 ; i < n ; i++) {
            if(ans[i] == 0 ) {
                cnt++ ; 
            }
        }
        return cnt ; 
    }
};