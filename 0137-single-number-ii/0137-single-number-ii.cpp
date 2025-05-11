class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size() ; 
        sort(nums.begin() , nums.end() ) ;
        int ans = 0 ; 
        if(nums.size() == 1) return nums[0] ; 
        if(nums[0] != nums[1] ) {
            ans = nums[0] ;
        }
        if(nums[n-1] != nums[n-2] ) {
            ans = nums[n-1] ; 
        }

        for(int i = 1 ; i < n-1 ; i++ ) {
            if(nums[i-1] != nums[i] && nums[i+1] != nums[i] ) {
                ans = nums[i] ;
            }
        }
        return ans ;
    }
};