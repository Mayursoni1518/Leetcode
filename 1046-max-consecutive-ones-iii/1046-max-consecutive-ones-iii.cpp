class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxi = INT_MIN ;
        int i = 0 ;
        int cnt1 = 0 ;
        int cnt0 = 0 ; 
        int j = 0 ;
        int n = nums.size() ;
        while(j < n) {
            if(nums[j] == 1 ){ cnt1++ ; } 
            if(nums[j] == 0 ) { cnt0++ ; }
            while(cnt0 > k) {
                if(nums[i] == 0) {
                    cnt0--; 
                }
                i++ ; 
            }
            maxi = max(maxi , j - i + 1 ) ; 
            j++ ; 
        } 
        return maxi ; 
    }
};