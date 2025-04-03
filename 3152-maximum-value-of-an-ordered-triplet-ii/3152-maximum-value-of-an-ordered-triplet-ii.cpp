class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size() ;
        long long ans = 0; 
        int maxi = 0 ;
        int maxiDiff = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++ ){
            ans = max(ans , static_cast<long long>(maxiDiff) * nums[i]) ;
            maxiDiff = max(maxiDiff , maxi - nums[i]) ;
            maxi = max(maxi , nums[i]) ; 
        }
        return ans; 
    }
};