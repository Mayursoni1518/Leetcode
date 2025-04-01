class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0 ;
        int total = 0 ;
        for(int i = 0 ; i < nums.size() ; i++) {
            total += nums[i] ; 
        }
        int ans = 0 ; 
        for(int i = 0 ; i < nums.size() -1; i++) {
            sum += nums[i] ;
            int val = total - sum ; 
            if((sum - val) % 2 == 0 ) {
                ans++ ; 
            }
        }
        return ans ; 
    }
};