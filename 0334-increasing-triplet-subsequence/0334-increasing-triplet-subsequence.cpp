class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size() < 3 ) { return false ; }
        int num1 = INT_MAX ; 
        int num2 = INT_MAX ; 
        int num3 ; 
        for(int i = 0 ; i < nums.size() ; i++ ) {
            if(nums[i] < num1) {
                num1 = nums[i] ; 
            }

            if(nums[i] > num1 && nums[i] < num2) {
                num2 = nums[i] ; 
            }

            if(nums[i] > num1 && num2 < nums[i] ){
                return true ; 
            }
        }
        return false ;
    }
};