class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end()) ;

        

        int low = nums[0] + k ;
        int high = nums[nums.size() - 1] - k ;

        int ans = high - low ; 

        if(ans < 0 ) return 0 ;

        return ans ;
    }
};