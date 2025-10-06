class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n = nums.size() ;
        int maxi = INT_MIN; 
        for(int i = 0 ; i < n -1 ; i++ ) {
            for(int j = i + 1 ; j < n ; j++ ) {
                if(abs(nums[i] - nums[j]) <= min(nums[i] , nums[j])) {
                    maxi = max(maxi , nums[i] ^ nums[j]) ; 
                }
            }
        }
        if(maxi == INT_MIN ){
            return 0 ; 
        }
        return maxi ;
    }
};