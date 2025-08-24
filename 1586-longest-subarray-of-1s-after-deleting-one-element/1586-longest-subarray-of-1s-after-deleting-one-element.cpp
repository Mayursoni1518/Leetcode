class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0 ;
        long cnt1 = 0 ;
        long cnt0 = 0 ;
        int maxi = INT_MIN;
        int j = 0 ;
        while(j < n ) {
            if(nums[j] == 1) { cnt1++ ; } 
            if(nums[j] == 0 ) { cnt0++ ; } 
            while(cnt0 > 1 ) {
                if(nums[i] == 0 ) { cnt0-- ; }
                if(nums[i] == 1 ) { cnt1++ ; }
                i++ ;
            }
            maxi = max(maxi , j - i + 1 ) ; 
            j++;
        }
        return maxi - 1 ; 
    }
};