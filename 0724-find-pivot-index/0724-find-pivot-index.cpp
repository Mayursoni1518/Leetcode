class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size() ;
        int sum = 0 ; 
        int total = 0 ; 
        for(int i = 0 ; i < n ; i++ ) 
        {
            total += nums[i] ; 
        }
        for(int i = 0 ; i < n ; i++ )
        {
            sum += nums[i] ;
            int val = sum - nums[i] ; 
            if(val == total - sum ){
                return i ; 
            } 
        }
        return -1 ; 
    }
};