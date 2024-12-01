class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0 ;
        int left = 0 ;

        for(auto i : nums) {
            total += i;
        }

        for(int i = 0 ; i < nums.size() ; i++){
            if(left == total - left - nums[i]) {
                return i ;
            }
            else{
                left += nums[i] ;
            }
        }
        return -1 ; 
    }
};